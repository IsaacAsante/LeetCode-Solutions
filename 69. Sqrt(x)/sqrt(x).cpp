/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/sqrtx/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int mySqrt(int x) {
        // NOTE: Square of INT_MAX is roughly 46341.
        // Using int for truncation (no need to worry about rounding)
        int left = 0;
        int right = 46340;
        int middle, result;

        while (left <= right) {
            if (left * left == x) return left;
            if (right * right == x) return right;
            // Find middle point and calculate
            middle = left + ((right - left) / 2);
            result = middle * middle;
            if (result == x)
                return middle;
            else if (result < x)
                left = middle + 1;
            else
                right = middle - 1;
        }
        return right;
    }
};