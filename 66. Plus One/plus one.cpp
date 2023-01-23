/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/plus-one/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // If the last digit is 9, we need a larger vector
        if (digits[digits.size() - 1] < 9) {
            digits[digits.size() - 1]++;
            return digits;
        }
        else {
            int i = digits.size() - 1;
            // Be sure to check the index i before the value of the digit
            while (i >= 0 && digits[i] == 9) {
                digits[i] = 0;
                i--;
            }
            // After updating nines to zeros, update the digit where we landed
            if (i < 0) {
                digits.insert(digits.begin(), 1);
            }
            else {
                digits[i]++;
            }
        }

        return digits;
    }
};