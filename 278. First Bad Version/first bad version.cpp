/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/first-bad-version/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

  // The API isBadVersion is defined for you.
  // bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1; // Lowest value
        int right = n; // Highest value
        int middle = 1;
        int last_found = 0; // Use to record when the faulty version was found
        while (left <= right) {
            // It could be either the left or right
            if (isBadVersion(left)) last_found = left;
            if (isBadVersion(right)) last_found = right;

            // Keep querying the versions
            middle = left + ((right - left) / 2);

            if (isBadVersion(middle)) {
                last_found = middle;
                // The first bad version could be towards the left
                right = middle - 1;
            }
            else {
                // The first bad version could be towards the right
                left = middle + 1;
            }
        }
        return last_found;
    }
};