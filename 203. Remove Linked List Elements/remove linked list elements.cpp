/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/remove-linked-list-elements/
 * Original video explanation: https://www.youtube.com/watch?v=gUe5wughUQ4
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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return head;
        // Handle the beginning
        while (head && head->val == val)
            head = head->next;

        ListNode* temp = head;

        while (temp) {
            if (temp->next && temp->next->val == val)
                temp->next = temp->next->next;
            else
                temp = temp->next;
        }
        return head;
    }
};