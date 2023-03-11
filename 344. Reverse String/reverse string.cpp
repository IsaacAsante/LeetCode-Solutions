/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/reverse-string/
 * Original video explanation: https://www.youtube.com/watch?v=jxF92SMVG5o
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;
        char temp;
        while (i <= j) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
};