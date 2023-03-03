/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/find-all-duplicates-in-an-array/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> m; // Tracking map
        vector<int> answer;
        answer.reserve(nums.size() / 2); // Enough space to save all the duplicates

        for (const int& num : nums) {
            m[num]++;
        }

        for (const auto& item : m) {
            if (item.second == 2)
                answer.push_back(item.first);
        }

        return answer;
    }
};