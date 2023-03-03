/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/power-of-two/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x = 0;
        // Any negative number is false
        if (n <= 0) return false;
        // Go to the max possible number, per the constraints
        while (x < 32) {
            if (pow(2, x) == n)
                return true;
            x++;
        }
        return false;
    }
};