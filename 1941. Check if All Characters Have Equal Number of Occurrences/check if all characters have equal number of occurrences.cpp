/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int counter[256] = { 0 };

        for (int i = 0; i < s.size(); i++)
            counter[s[i]]++; // Counter the characters' occurences

        int val = 0;
        for (int i = 97; i < 123; i++) {
            if (counter[i] != 0) {
                if (val == 0) val = counter[i]; // Update val the first time
                else if (val != counter[i]) return false; // If there's a valid different from val (and not 0)
            }
        }

        return true;

    }
};