/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
 * Original video explanation: Pending
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

public:
    int maxDepth(Node* root) {
        if (!root)
            return 0;

        int depth = 0;
        for (short i = 0; i < root->children.size(); i++)
            depth = max(depth, maxDepth(root->children[i]));

        return depth + 1;

    }
};