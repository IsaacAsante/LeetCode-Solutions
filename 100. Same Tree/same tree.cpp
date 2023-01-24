/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/same-tree/
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Create stacks for BFS algorithm and push the roots
        std::stack<TreeNode*> p_stack;
        std::stack<TreeNode*> q_stack;
        p_stack.push(p);
        q_stack.push(q);

        while (!p_stack.empty() && !q_stack.empty()) {

            // Grab top values
            TreeNode* temp_p = p_stack.top();
            TreeNode* temp_q = q_stack.top();

            // If either nodes is empty, the structure is different
            if (temp_p && !temp_q || !temp_p && temp_q)
                return false;

            // If both nodes are null, just pop them
            else if (!temp_p && !temp_q) {
                p_stack.pop();
                q_stack.pop();
            }

            // If the values are different, the trees aren't the same
            else if (temp_p->val != temp_q->val)
                return false;

            // Otherwise, proceed with BFS but add every node, include NULL nodes
            else {
                p_stack.pop();
                q_stack.pop();

                p_stack.push(temp_p->left);
                p_stack.push(temp_p->right);

                q_stack.push(temp_q->left);
                q_stack.push(temp_q->right);
            }
        }

        // The BFS algorithm matched both trees structurally and by values
        return true;
    }
};