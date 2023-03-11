/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/find-players-with-zero-or-one-losses/
 * Original video explanation: https://www.youtube.com/watch?v=A9S98aVOpdk
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> tracker; // Sorted map

        for (const vector<int>& match : matches) {
            tracker[match[0]]; // Just ensure the winner is in the map
            tracker[match[1]]++; // Record defeat
        }

        vector<vector<int>> answer;
        answer.push_back(vector<int>());
        answer.push_back(vector<int>());

        for (const auto& player : tracker) {
            if (player.second == 0) {
                answer[0].push_back(player.first);
            }
            else if (player.second == 1) {
                answer[1].push_back(player.first);
            }
        }

        return answer;
    }
};