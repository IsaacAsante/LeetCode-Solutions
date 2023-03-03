/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/valid-anagram/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        // Character counting for first string
        for (char& c : s) {
            m[c]++;
        }

        // Second string must have same characters in same numbers
        for (char& c : t) {
            m[c]--;
        }

        // If all values are zero in the map, we have an anagram
        for (const auto& item : m) {
            if (item.second != 0) return false;
        }

        return true;
    }
};