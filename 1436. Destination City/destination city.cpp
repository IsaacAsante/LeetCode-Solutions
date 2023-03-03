/* Author: Isaac Asante
 * LeetCode URL for this problem: https://leetcode.com/problems/destination-city/
 * Original video explanation: Pending
 * Last verified on: March 4, 2023
 */

 /* IMPORTANT:
  * C++ headers are missing from the code below.
  * Only the Solution class is included.
  */


class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> m;
        string destination;

        // Store all the city combinations in the map
        for (const vector<string>& path : paths) {
            m[path[0]] = path[1];
        }

        // Start from the initial (source) city
        unordered_map<string, string>::iterator it = m.find(paths[0][0]);

        // Get the next city from the source
        while (it != m.end()) {
            destination = it->second; // Save the (temporary) destination
            it = m.find(it->second); // Query the (temporary) destination until there's no outgoing path
        }

        return destination;
    }
};