/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/search-insert-position/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // Initializing
        int left = 0, right = nums.size() - 1, middle = 0;
        // Binary Search logic
        while (left <= right) {
            // Did we find it?
            if (nums[left] == target) return left;
            if (nums[right] == target) return right;

            // If not in the middle, readjust the index values
            middle = left + ((right - left) / 2);
            if (nums[middle] == target)
                return middle;
            else if (nums[middle] < target)
                left = middle + 1;
            else
                right = middle - 1;
        }
        // Else, return to the position next to where we ended.
        return right + 1;
    }
};