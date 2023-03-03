/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/find-the-difference/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    char findTheDifference(string s, string t) {
        /* I'm re-using my logic from the problem called Valid Anagram.
         * But only changing a few things for the correct output
         */

        unordered_map<char, int> m;
        // Character counting for first string
        for (char& c : s) {
            m[c]++;
        }

        // Second string must have same characters in same numbers
        for (char& c : t) {
            m[c]--;
        }

        char answer;
        // If all values are zero in the map, we have an anagram
        for (const auto& item : m) {
            if (item.second != 0) {
                answer = item.first;
                break;
            }
        }

        return answer;
    }
};