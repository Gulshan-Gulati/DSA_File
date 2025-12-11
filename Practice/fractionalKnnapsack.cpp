#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Comparison function to sort items based on value/weight ratio
bool compare(vector<int>& a, vector<int>& b) {
    double a1 = a[0] / a[1];
    double b1 = b[0] / b[1];
    return a1 > b1;
}

double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
    int n = val.size();
    
    // Create 2D vector to store value and weight
    // items[i][0] = value, items[i][1] = weight
    vector<vector<int>> items(n, vector<int>(2));
    
    for (int i = 0; i < n; i++) {
        items[i][0] = val[i];
        items[i][1] = wt[i];
    }
    
    // Sort items based on value-to-weight ratio in descending order
    sort(items.begin(), items.end(), compare);
    
    double res = 0.0;
    int currentCapacity = capacity;
    
    // Process items in sorted order
    for (int i = 0; i < n; i++) {
        
        // If we can take the entire item
        if (items[i][1] <= currentCapacity) {
            res += items[i][0];
            currentCapacity -= items[i][1];
        }
        
        // Otherwise take a fraction of the item
        else {
            res += (items[i][0] / items[i][1]) * currentCapacity;
            
            // Knapsack is full
            break; 
        }
    }
    
    return res;
}

int main() {
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int capacity = 50;
    
    cout << fractionalKnapsack(val, wt, capacity) << endl;
    
    return 0;
}