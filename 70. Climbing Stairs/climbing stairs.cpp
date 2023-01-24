/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/climbing-stairs/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int climbStairs(int n) {
        // 1 or 0 steps means 1 way (a negative value is invalid)
        if (n < 2) return 1;

        int climb;
        int answer[46] = { 0 }; // 45 + 1 per the constraints (index = steps)

        answer[0] = 1; // No steps means there's 1 way
        answer[1] = 1; // 1 step means there's also 1 way

        for (int i = 2; i <= n; i++) {
            answer[i] = answer[i - 2] + answer[i - 1];
            climb = answer[i];
        }
        return climb;
    }
};