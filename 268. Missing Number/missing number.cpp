/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/missing-number/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // Register the presence of every item in the array
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++; // Not necessary to increment (optional)

        /* A map's key are sorted by default, so we track the missing key
         * as we iterate through the map sequentially
         */
        int i = 0, answer = -1;
        for (const auto& item : m) {
            if (item.first != i) {
                answer = i;
                break;
            }
            ++i;
        }

        // If the loop finished but the map's last element isn't n...
        if ((--m.end())->first != nums.size()) return nums.size();
        else return answer;
    }
};