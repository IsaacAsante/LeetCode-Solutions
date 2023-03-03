/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/valid-perfect-square/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool isPerfectSquare(int num) {
        // NOTE: Square of INT_MAX is roughly 46341.
        int left = 0;
        int right = 46340;
        int middle, result;

        while (left <= right) {
            if (left * left == num) return left;
            if (right * right == num) return right;
            // Find middle point and calculate
            middle = left + ((right - left) / 2);
            result = middle * middle;
            if (result == num)
                return true;
            else if (result < num)
                left = middle + 1;
            else
                right = middle - 1;
        }

        // If the loop terminated and the function did not return, it's false.
        return false;
    }
};