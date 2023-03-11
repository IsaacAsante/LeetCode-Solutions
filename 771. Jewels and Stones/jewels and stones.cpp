/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/jewels-and-stones/
 * Original video explanation: https://www.youtube.com/watch?v=3PItz3_mlFQ
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter[256] = { 0 };
        int amount = 0;

        for (int i = 0; i < jewels.size(); i++)
            counter[jewels[i]]++;

        for (int i = 0; i < stones.size(); i++) {
            if (counter[stones[i]] > 0)
                amount++;
        }

        return amount;
    }
};