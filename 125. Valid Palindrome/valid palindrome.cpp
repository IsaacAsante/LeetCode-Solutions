/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/valid-palindrome/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool isPalindrome(string s) {
        // A string with 2 characters or less is automatically a palindrome
        if (s.size() < 2) return true;

        // Otherwise, process string
        int i = 0, j = s.size() - 1;
        while (i <= j) {
            // Convert character to lowercase if necessary
            if (isalpha(s[i])) {
                if (isupper(s[i]))
                    s[i] = tolower(s[i]);
            }
            else {
                while (!isalpha(s[i]) && !isdigit(s[i]) && i < j) {
                    // If not a letter, search for next one
                    i++;
                }
                // Wherever the search stopped, make sure we have a lowercase
                s[i] = tolower(s[i]);
            }

            // Convert character to lowercase if necessary
            if (isalpha(s[j])) {
                if (isupper(s[j]))
                    s[j] = tolower(s[j]);
            }
            else {
                while (!isalpha(s[j]) && !isdigit(s[j]) && j > i) { // If not a letter, search for next one
                    j--;
                }
                s[j] = tolower(s[j]);
            }

            if (s[i] != s[j])
                return false; // The moment the comparison fails, we're done
            else {
                i++, j--; // Otherwise, keep comparing
            }
        }
        return true;
    }
};