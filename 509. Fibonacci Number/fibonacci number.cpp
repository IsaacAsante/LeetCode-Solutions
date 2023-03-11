/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/fibonacci-number/
 * Original video explanation: https://www.youtube.com/watch?v=L6WnANx_cQo
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int fib(int n) {
        if (n < 2) return n;
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};