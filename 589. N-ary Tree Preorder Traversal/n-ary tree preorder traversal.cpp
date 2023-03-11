/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/n-ary-tree-preorder-traversal/
 * Original video explanation: https://www.youtube.com/watch?v=EVMemtP21_4
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    vector<int> values;
public:
    Solution() { values.reserve(10000); }
    vector<int> preorder(Node* root) {
        if (root) {
            values.emplace_back(root->val);
            if (root->children.size() > 0)
                for (Node* child : root->children)
                    preorder(child);
        }
        return values;
    }
};




