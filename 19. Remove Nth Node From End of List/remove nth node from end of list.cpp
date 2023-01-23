/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp;
        temp = head;
        int counter = 1;

        // Find out how many nodes the list has
        while (temp->next != NULL) {
            temp = temp->next;
            counter++;
        }

        if (counter == 1) return NULL; // There was only one node

        int i = 1; // use i to iterate to find the node to delete
        temp = head; // Reset temp to start iteration from beginning

        ListNode* toDelete, * toReturn;

        // Case where the head must be deleted
        if (counter == n) {
            toDelete = head;
            toReturn = head->next;
        }
        else {
            while (counter - i > n) {
                temp = temp->next;
                i++;
            }
            // temp->next is the node to delete
            toDelete = temp->next;
            temp->next = toDelete->next;
            toReturn = head;
        }

        delete toDelete;

        return toReturn;

    }
};