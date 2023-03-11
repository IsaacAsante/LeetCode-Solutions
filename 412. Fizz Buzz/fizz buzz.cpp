/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/fizz-buzz/
 * Original video explanation: https://www.youtube.com/watch?v=ZJR71jTxpiQ
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n); // Enough space for 1-indexed array with size n

        int i = 1;
        while (i <= n) {
            if (i % 3 == 0) {
                if (i % 5 == 0) {
                    answer[i - 1] = "FizzBuzz";
                }
                else {
                    answer[i - 1] = "Fizz";
                }
            }
            else if (i % 5 == 0) {
                answer[i - 1] = "Buzz";
            }
            else {
                answer[i - 1] = to_string(i);
            }

            i++;
        }

        return answer;
    }
};