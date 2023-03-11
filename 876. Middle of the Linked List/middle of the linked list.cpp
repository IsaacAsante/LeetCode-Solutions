/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/middle-of-the-linked-list/
 * Original video explanation: https://www.youtube.com/watch?v=I7Mb8I7iuso
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* normal = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            fast = fast->next->next; // Move twice as fast
            normal = normal->next;
        }
        return normal;
    }
};