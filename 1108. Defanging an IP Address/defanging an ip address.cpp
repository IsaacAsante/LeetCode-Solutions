/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/defanging-an-ip-address/
 * Original video explanation: https://www.youtube.com/watch?v=okqVFD5-7UY
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    string defangIPaddr(string address) {
        const string open = "[", close = "]";

        // Note: address.size() keeps getting updated as we add characters
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                address.insert(i, open);
                ++i; // consider the latest character addition
                address.insert(i + 1, close);
            }
        }

        return address;
    }
};