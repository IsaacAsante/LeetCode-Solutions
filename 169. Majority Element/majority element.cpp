/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/majority-element/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val = -1;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (++m[nums[i]] > nums.size() / 2) {
                val = nums[i];
                break;
            }
            // The condition directly increases the count;
        }
        return val;
    }
};