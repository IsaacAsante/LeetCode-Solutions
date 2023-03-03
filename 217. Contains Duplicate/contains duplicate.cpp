/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/contains-duplicate/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> tracker;
        for (int i = 0; i < nums.size(); i++) {
            if (++tracker[nums[i]] >= 2) return true;
        }
        return false;
    }
};