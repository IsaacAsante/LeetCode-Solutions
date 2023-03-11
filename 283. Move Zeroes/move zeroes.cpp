/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/move-zeroes/
 * Original video explanation: https://www.youtube.com/watch?v=p2Cy5_N5uFg
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int tracker = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[tracker] = nums[i];
                tracker++;
            }
        }

        // Now set the rest of the array to zeros
        for (tracker; tracker < nums.size(); tracker++) {
            nums[tracker] = 0;
        }
    }
};