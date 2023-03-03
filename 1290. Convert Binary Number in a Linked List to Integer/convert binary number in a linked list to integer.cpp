/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * Some C++ headers might be missing from the code below.
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

#include <bitset> 
#include <string>

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        std::string val;
        int i = 0;
        ListNode* temp = head;
        while (temp) {
            val.append(std::to_string(temp->val)); // Recreate the bit sequence
            temp = temp->next;
            i++;
        }
        std::bitset<30> bit_val(val); // Number of nodes doesn't exceed 30
        return (int)bit_val.to_ulong(); // Convert bits to decimal value
    }
};