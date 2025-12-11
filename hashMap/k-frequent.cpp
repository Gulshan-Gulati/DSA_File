//Find Top K Frequent Elements
//Given an integer array nums and an integer k, return the k most frequent elements.
//You may return the answer in any order.
//Example 1:
// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequency of each number using unordered_map
        unordered_map<int,int> freq;
        for(int num : nums) freq[num]++;

        // Step 2: Map frequency to elements using map
        // map<int, vector<int>> automatically sorts keys (frequencies) in ascending order
        map<int, vector<int>> freqMap;
        for(auto it = freq.begin(); it != freq.end(); ++it) {
            int num = it->first;   // the number
            int f = it->second;    // its frequency
            freqMap[f].push_back(num); // group numbers by their frequency
        }

        // Step 3: Collect top K frequent elements
        vector<int> ans;
        // Iterate from highest frequency to lowest using rbegin() of map
        for(auto it = freqMap.rbegin(); it != freqMap.rend() && ans.size() < k; ++it) {
            for(int num : it->second) {
                ans.push_back(num);       // add number to answer
                if(ans.size() == k) break; // stop if we have collected K elements
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {1,1,1,2,2,3,3,3,3,4};
    int k = 3;

    // Get top K frequent elements
    vector<int> result = sol.topKFrequent(nums, k);

    // Output result
    cout << "Top " << k << " frequent elements: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
