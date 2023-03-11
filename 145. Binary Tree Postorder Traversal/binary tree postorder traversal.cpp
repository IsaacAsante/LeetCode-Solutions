/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/binary-tree-postorder-traversal/
 * Original video explanation: https://www.youtube.com/watch?v=bPqn35juyh8
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
    vector<int> postorderTraversal(TreeNode* root) {
        if (root) {
            if (root->left) postorderTraversal(root->left);
            if (root->right) postorderTraversal(root->right);
            values.emplace_back(root->val);
        }
        return values;
    }
};


