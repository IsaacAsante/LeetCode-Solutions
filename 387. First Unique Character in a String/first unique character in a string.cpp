/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/first-unique-character-in-a-string/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int firstUniqChar(string s) {
        int counter[256] = { 0 }; // Initialize all values to 0

        for (int i = 0; i < s.size(); i++) {
            counter[s[i]]++; // Character counter
        }

        for (int i = 0; i < s.size(); i++) {
            // The first character that has a count of 1, is the correct one
            if (counter[s[i]] == 1)
                return i;
        }

        return -1;
    }
};