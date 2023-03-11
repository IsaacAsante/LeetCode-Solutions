/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/ransom-note/
 * Original video explanation: https://www.youtube.com/watch?v=sDpArYbBLyo
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int counter[256] = { 0 };

        // Count the characters in ransomNote
        for (int i = 0; i < ransomNote.size(); i++)
            counter[ransomNote[i]]++;

        // Reduce the counts using the magazine string
        for (int i = 0; i < magazine.size(); i++)
            // Only reduce if it's a character in ransomNote
            if (counter[magazine[i]] != 0)
                counter[magazine[i]]--;

        // If the array does not have all zeros, then answer is False
        for (int i = 0; i < 256; i++) {
            if (counter[i] != 0)
                return false;
        }

        return true;
    }
};