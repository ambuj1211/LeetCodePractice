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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        // Initialize the matrix with -1 (to represent empty spaces)
        vector<vector<int>> matrix(m, vector<int>(n, -1));
        
        // Spiral direction movements: right, down, left, up
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int dir = 0; // Start moving right
        int i = 0, j = 0; // Start at the top-left corner
        
        ListNode* current = head;
        int totalElements = m * n;
        
        for (int k = 0; k < totalElements && current != nullptr; ++k) {
            // Fill the current cell
            matrix[i][j] = current->val;
            current = current->next;
            
            // Compute the next cell coordinates
            int next_i = i + directions[dir].first;
            int next_j = j + directions[dir].second;
            
            // Check if the next cell is out of bounds or already filled
            if (next_i < 0 || next_i >= m || next_j < 0 || next_j >= n || matrix[next_i][next_j] != -1) {
                // Change direction (right -> down -> left -> up)
                dir = (dir + 1) % 4;
                next_i = i + directions[dir].first;
                next_j = j + directions[dir].second;
            }
            
            // Move to the next cell
            i = next_i;
            j = next_j;
        }
        
        return matrix;
    }
};