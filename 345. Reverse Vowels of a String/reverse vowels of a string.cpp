/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/reverse-vowels-of-a-string/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    // I'm adding this method
    bool isVowel(const char& c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {

        // A one-character string needs no swapping/reversing
        if (s.size() == 1) return s;

        // Use a two-pointer approach
        int i = 0, j = s.size() - 1;

        while (i <= j) {

            // Find the next available vowel on J's side
            while (j > 0 && j > i && !isVowel(s[j]))
                --j;

            // Find the next available vowel on I's side
            while (i >= 0 && i < j && !isVowel(s[i]))
                ++i;

            // Swap the vowels
            swap(s[i], s[j]);

            // Keep exploring
            ++i, --j;
        }

        return s;
    }
};