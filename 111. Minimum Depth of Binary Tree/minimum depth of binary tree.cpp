/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0; // Ignore empty subtrees
        int left_counter = minDepth(root->left) + 1;
        int right_counter = minDepth(root->right) + 1;

        /* Check if one subtree is empty
         * If yes, inherit the depth of the opposite tree (left/right)
         * Note that I'm using "< 2" below because of "+1" above
         */
        if (left_counter < 2)
            left_counter = right_counter;
        if (right_counter < 2) // Because of +1 above
            right_counter = left_counter;
        return min(left_counter, right_counter);
    }
};