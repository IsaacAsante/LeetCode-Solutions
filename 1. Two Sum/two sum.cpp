/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/two-sum/
 * Original video explanation: https://www.youtube.com/watch?v=vTbqhSkRskw
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below. 
  * Only the Solution class is included.
  */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int first_index, second_index; // Use to store correct indices

        for (int i = 0; i < nums.size(); i++) {

            /* Is there another saved value (in the map), which amounts
             * to the target when added to the current one?
             */
            unordered_map<int, int>::iterator it = m.find(target - nums[i]);
            if (it != m.end()) {
                first_index = it->second; // Save the other index
                second_index = i; // Save current index
                break; // Exit immediately
            }
            // Otherwise, update normally
            m[nums[i]] = i;
        }
        return vector<int>{first_index, second_index};
    }
};