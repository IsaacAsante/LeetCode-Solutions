/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/second-largest-digit-in-a-string/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int secondHighest(string s) {
        // Sort the characters first so that we can start from the end
        sort(s.begin(), s.end());

        int second = INT_MAX, counter = 0;

        // Start from the end
        for (int i = s.size() - 1; i >= 0; i--) {
            // If it's a digit...
            if (s[i] >= '0' && s[i] <= '9') {
                // Check if "second" must be updated and keep count
                if (s[i] - '0' < second) {
                    second = s[i] - '0';
                    ++counter;
                }
                // Stop processing if the second largest element's been found
                if (counter == 2) break;
            }
        }

        // Account for invalid situations 
        if (counter < 2 || second == INT_MAX)
            return -1;
        return second; // Else, return the correct answer
    }
};