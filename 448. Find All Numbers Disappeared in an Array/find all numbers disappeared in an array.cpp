/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Sort the array
        map<int, int> m;

        vector<int> missing_val;
        missing_val.reserve(nums.size()); // Reserve enough space

        for (const int& num : nums) {
            m[num] = true;
        }

        int expected = 1;

        for (const auto& item : m) {
            if (item.first != expected) {
                missing_val.push_back(expected); // Grab this missing value
                while (item.first != ++expected) // Start moving "expected"
                    missing_val.push_back(expected); // Add other missing values
            }
            expected++;
        }

        // Find the rest of the missing values
        while (expected <= nums.size()) {
            missing_val.push_back(expected);
            expected++;
        }

        return missing_val;
    }
};