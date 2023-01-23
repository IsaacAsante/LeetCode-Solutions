/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/roman-to-integer/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0, i = 0;
        std::map<char, short> letterMap = {
            {'I',1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for (i; i < s.length() - 1; i++) {
            bool condition1 = s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X');
            bool condition2 = s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C');
            bool condition3 = s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M');

            if (condition1)
                sum += letterMap[s[i + 1]] - 1;
            else if (condition2)
                sum += letterMap[s[i + 1]] - 10;
            else if (condition3)
                sum += letterMap[s[i + 1]] - 100;
            else
                sum += letterMap[s[i]];

            if (condition1 || condition2 || condition3)
                i++; // Skip the next character as it's part of the current calculation
        }

        return (i == s.length()) ? sum : sum + letterMap[s[i]];
    }
};