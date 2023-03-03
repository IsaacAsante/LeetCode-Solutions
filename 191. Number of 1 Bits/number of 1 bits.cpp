#include <bitset>
/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/number-of-1-bits/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0, i = 0;
        while (i < 32) {
            // Uncomment to understand
            // std::bitset<32> binary(n >> i);
            // cout << binary << endl;
            if (((n >> i) & 1) == 1) counter++;
            i++;
        }

        return counter;

    }
};