/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/is-subsequence/description/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool isSubsequence(string s, string t) {
        // A substring cannot be longer than the original
        if (s.size() > t.size()) return 0;

        int i = 0, j = 0;
        while (i < s.size()) {
            if (s[i] != t[j]) {
                // Character mismatch
                while (s[i] != t[j] && j < t.size())
                    j++; // Search for a match in string t

                if (j == t.size()) return false; // If t's processed, terminate
            }
            // Increment both i and j
            ++i, ++j;
        }
        return true;
    }
};