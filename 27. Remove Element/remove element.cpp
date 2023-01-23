/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/remove-element/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Create a counter to track how many elements are left after removing 'val'
        int counter = nums.size();
        // Modify the unwanted elements for easy sorting later
        for (int& num : nums) {
            if (num == val) {
                --counter;
                num = INT_MAX;
            }
        }
        // Sort the vector
        sort(nums.begin(), nums.end());
        return counter;
    }
};