/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/word-pattern/
 * Original video explanation: https://www.youtube.com/watch?v=Iznmfe0GcVc
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    bool wordPattern(string pattern, string s) {

        // Get tokens from s
        vector<string> word_list;

        istringstream tokenizer(s);
        string word;
        while (getline(tokenizer, word, ' ')) {
            word_list.push_back(word);
        }

        // If the pattern characters or string's words are not equal, don't continue
        if (pattern.size() != word_list.size())
            return false;

        // Map the words from s to the pattern's characters
        map<char, string> wordmap;
        vector<string> checker(word_list.size()); // Used to verify that values aren't added more than once to the map
        int i = 0;
        for (char& c : pattern) {
            // Only map if the key doesn't already exist in the map and if the value wasn't previously added
            if (wordmap.find(c) == wordmap.end() && (find(checker.begin(), checker.end(), word_list[i]) == checker.end())) {
                wordmap[c] = word_list[i];
                // Record the value insertion
                checker[i] = word_list[i];
            }
            i++;
        }

        // Verify 
        for (int i = 0; i < pattern.size(); i++) {
            if (wordmap[pattern[i]] != word_list[i]) {
                return false;
            }
        }

        return true;
    }
};