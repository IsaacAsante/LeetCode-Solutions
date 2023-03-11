/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/power-of-three/
 * Original video explanation: https://www.youtube.com/watch?v=z3zwlfViV6M
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 3) {
            // Power of 0 gives 1
            if (n == 3 || n == 1) return true;
            else return false;
        }

        // n must be divisible by 3 until the result is 3
        while (n >= 3) {
            if (n % 3) return false;
            else n /= 3;
        }
        if (n == 1) return true;
        else return false;
    }
};