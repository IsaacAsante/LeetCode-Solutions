/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/single-number/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, short> m;
        int ans;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;

        for (const auto& item : m) {
            if (item.second != 2) {
                ans = item.first;
                break;
            }
        }

        return ans;
    }
};