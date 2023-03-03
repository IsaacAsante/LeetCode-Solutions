/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/intersection-of-two-arrays/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        unordered_map<int, int> m;
        // Reserve enough memory for the max possible number of unique values
        inter.reserve(min(nums1.size(), nums2.size()));

        // Record the values from the first list
        for (int& n : nums1)
            m[n] = true;

        // Now compare with the second list
        for (int& n : nums2) {
            if (m[n] == 1)
                m[n] = 2;
        }

        // Explore the map
        for (const auto& item : m) {
            if (item.second == 2)
                inter.emplace_back(item.first);
            // By adding the keys, we prevent the risk of having duplicates
        }

        return inter;
    }
};