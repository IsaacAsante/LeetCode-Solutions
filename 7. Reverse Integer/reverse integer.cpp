/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/reverse-integer/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        string converted = to_string(x);
        string sign = converted.substr(0, 1);
        try {
            size_t start = (sign == "-") ? 1 : 0;
            string ans = converted.substr(start, converted.size());
            std::reverse(ans.begin(), ans.end());
            return start ? stoi(sign + ans) : stoi(ans);
        }
        catch (...) {
            return 0; // Catch all exceptions
        }
    }
};