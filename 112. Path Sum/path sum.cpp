/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/path-sum/
 * Original video explanation: https://www.youtube.com/watch?v=igpsRwnPFdE
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

   /* MY LOGIC: TRUE if targetSum reaches the value 0 after
    * constant deductions at a leaf node (and not before)
    * i.e. the node's left and right children must be NULL by then
    * Keep exploring left and right child nodes (DFS)
    * but only do so while we've not determined if the task can be done.
    * Once we've returned TRUE once, save the value in a member variable,
    * then stop the recursion. This significantly increases the
    * solution's performance.
    */

class Solution {
private:
    bool found;
public:
    Solution() { found = false; }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root && !found) {
            if ((targetSum - root->val == 0) && (!root->left && !root->right))
            {
                found = true;
                return found;
            }
            else {
                hasPathSum(root->left, targetSum - root->val);
                hasPathSum(root->right, targetSum - root->val);
                return found;
            }
        }
        else {
            return false;
        }
    }
};