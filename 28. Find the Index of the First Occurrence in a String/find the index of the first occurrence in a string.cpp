/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 * Original video explanation: https://www.youtube.com/watch?v=SX3ykIaxcTs
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};