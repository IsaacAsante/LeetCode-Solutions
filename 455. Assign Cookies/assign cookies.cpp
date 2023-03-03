/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/assign-cookies/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // Sort both arrays first
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        // Compare using the two-pointer approach and keep count
        int counter = 0;
        int i = 0, j = 0;

        while (i < g.size() && j < s.size()) {
            // Find the right cookie size for the current child
            while (j < s.size() && s[j] < g[i])
                j++;

            // If no other suitable cookie size was found, terminate
            if (j >= s.size()) return counter;

            // Otherwise, record that you gave a cookie
            counter++;

            // Proceed with the rest of the lists
            i++, j++;
        }

        return counter;
    }
};