/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
 * Original video explanation: https://www.youtube.com/watch?v=xAcqXgxV018
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    // Add private
private:
    unordered_map<int, bool> m;
    int counter;
    bool found = false;
public:
    // Custom constructor
    Solution() {
        counter = 0;
    };
    bool findTarget(TreeNode* root, int k) {
        if (found) return true;
        if (root) {
            counter++;
            found = m.find(k - root->val) != m.end();
            m[root->val] = true; // Add value to map

            findTarget(root->left, k);
            findTarget(root->right, k);

            return found && (counter > 1);
        }
        return false;
    }
};