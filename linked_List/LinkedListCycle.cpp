#include <iostream>
using namespace std;

// Simple definition of a singly linked list node
struct ListNode {
    int value;
    ListNode* next;
    ListNode(int val) : value(val), next(NULL) {}
};

class Solution {
public:
    // Detects a cycle in the linked list
    // Returns the node where the cycle starts, or NULL if there is no cycle
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head; // Moves one step at a time
        ListNode* fast = head; // Moves two steps at a time

        // First, check if a cycle exists
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) { // They meet -> cycle exists
                break;
            }
        }

        // If fast reached the end, there is no cycle
        if(fast == NULL || fast->next == NULL) {
            return NULL;
        }

        // To find the starting node of the cycle:
        // Move one pointer to the head and keep moving both one step at a time
        ListNode* start = head;
        while(start != slow) {
            start = start->next;
            slow = slow->next;
        }

        return start; // Node where cycle begins
    }
};

// Helper to create a cycle in the linked list for testing
void createCycle(ListNode* head, int pos) {
    if(pos < 0) return;

    ListNode* cycleStart = nullptr;
    ListNode* current = head;
    int index = 0;
    ListNode* lastNode = nullptr;

    while(current != NULL) {
        if(index == pos) {
            cycleStart = current; // Remember the node where cycle should start
        }
        lastNode = current;
        current = current->next;
        index++;
    }

    if(lastNode != NULL) {
        lastNode->next = cycleStart; // Connect last node to the start node to form a cycle
    }
}

int main() {
    // Create a simple linked list: 7 -> 2 -> 8 -> 10
    ListNode* head = new ListNode(7);
    head->next = new ListNode(2);
    head->next->next = new ListNode(8);
    head->next->next->next = new ListNode(10);

    // Create a cycle at position 1 (0-based indexing)
    createCycle(head, 1);

    Solution solution;
    ListNode* cycleNode = solution.detectCycle(head);

    if(cycleNode != NULL) {
        cout << "Cycle starts at node with value: " << cycleNode->value << endl;
    } else {
        cout << "No cycle detected" << endl;
    }

    return 0;
}
