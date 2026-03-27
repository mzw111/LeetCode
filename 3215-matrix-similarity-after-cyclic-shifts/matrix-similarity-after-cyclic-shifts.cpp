class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> matrix (n, vector<int> (m));
        if (m == k) {
            return true;
        }
        k = k % m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i % 2 == 0) {
                    matrix[i][(j - k + m) % m] = mat[i][j];
                } else {
                    matrix[i][(j + k) % m] = mat[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] != matrix[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }
};