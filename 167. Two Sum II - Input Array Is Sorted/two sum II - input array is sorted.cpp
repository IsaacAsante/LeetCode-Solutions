/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> m;
        int first_index, second_index;
        for (int i = 0; i < numbers.size(); i++) {
            unordered_map<int, int>::iterator it = m.find(target - numbers[i]);
            if (it != m.end()) {
                first_index = it->second;
                second_index = i;
                break;
            }
            m[numbers[i]] = i;
        }
        // Increment by 1 before returning (1-based index)
        return vector<int>({ ++first_index, ++second_index });
    }
};
