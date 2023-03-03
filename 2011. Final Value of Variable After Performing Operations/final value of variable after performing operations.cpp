/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int answer = 0;
        for (const string& s : operations) {
            if (s == "++X" || s == "X++")
                answer++;
            else answer--;
        }

        return answer;
    }
};