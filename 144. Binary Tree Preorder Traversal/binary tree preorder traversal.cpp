/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/binary-tree-preorder-traversal/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
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
private:
    vector<int> values;
public:
    // Prevent re-allocation
    Solution() { values.reserve(100); }

    vector<int> preorderTraversal(TreeNode* root) {
        if (root) {
            // Store current node's value
            values.emplace_back(root->val);
            // Visit left
            if (root->left) preorderTraversal(root->left);
            // Visit right
            if (root->right) preorderTraversal(root->right);
        }
        return values; // Return stored values
    }
};