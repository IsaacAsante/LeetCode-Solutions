/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/number-of-segments-in-a-string/
 * Original video explanation: https://www.youtube.com/watch?v=S5rYHoadK_8
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int countSegments(string s) {
        // First, make sure that there's at least one character
        if (s.size() == 0)
            return 0;

        // If the string isn't made up from only characters (or empty)
        istringstream extractor(s);
        int count = 0;
        string word;
        while (getline(extractor, word, ' ')) {
            // Some "empty" characters are the null character
            if (word[0] != 0)
                count++;
        }
        return count;
    }
};