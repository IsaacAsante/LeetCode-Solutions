/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        if (high - low < 2)
            return (low % 2) || (high % 2);

        count = (low % 2) + (high % 2);

        if (count < 2)
            return count + (high - low) / 2;
        else
            return count + (high - low) / 2 - 1;

    }
};