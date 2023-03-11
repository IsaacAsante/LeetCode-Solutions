/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/power-of-four/
 * Original video explanation: https://www.youtube.com/watch?v=aoWHn88nJR4
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool isPowerOfFour(int n) {
        // Zero and all negative numbers are false
        if (n <= 0) return false;

        // Powers of 2 are two times slower than powers of 4 
        int i = 0;

        while (i <= 15) {
            if (pow(4, i) == n) return true;
            ++i;
        }
        return false;
    }
};