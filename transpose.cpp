class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        vector<vector<int>> z(cols, vector<int>(rows)); // Corrected matrix initialization
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                z[j][i] = matrix[i][j]; // Corrected assignment
            }
        }
        return z;
    }
};
