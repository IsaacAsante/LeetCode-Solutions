/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/length-of-last-word/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream tokenizer(s);
        string word;
        int word_length = 0;
        vector<string> tokens;

        while (getline(tokenizer, word, ' ')) {
            tokens.push_back(word);
        }

        // Start from the end
        for (int i = tokens.size() - 1; i >= 0; i--) {
            if (isalpha(tokens[i][0])) {
                word_length = tokens[i].size();
                break;
            }
        }

        return word_length;
    }
};