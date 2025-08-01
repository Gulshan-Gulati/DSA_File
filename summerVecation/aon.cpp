#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (count > 0) result += ch;  // Skip the first '(' of each group
                count++;
            } else if (ch == ')') {
                count--;
                if (count > 0) result += ch;  // Skip the last ')' of each group
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    string input = "(()())(())";
    cout << "Result: " << sol.removeOuterParentheses(input) << endl;
    return 0;
}
