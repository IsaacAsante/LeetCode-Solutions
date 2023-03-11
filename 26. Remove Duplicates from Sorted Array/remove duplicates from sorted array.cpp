/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * Original video explanation: https://www.youtube.com/watch?v=xB3zvkx1qms
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Default conditions
        if (nums.empty()) return 0;
        if (nums.size() == 1) return 1;
        // Fast and slow pointers
        int i = 0, k = 1, count = 1; // Count is 1 because there's at least 1 unique item
        // So long as we can explore the list for larger values
        while (k < nums.size()) {
            // Once we find a value
            if (nums[k] <= nums[i]) {
                k++; // Keep exploring
                continue;
            }
            else {
                i++; // Increase i first for the next update
                nums[i] = nums[k];
                count++; // Record update
            }
        }
        return count;
    }
};