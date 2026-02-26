class Solution {
public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> result;

        for (int j = 0; j < m; j++) {
            result.push_back(mat[0][j]);
        }

        for (int i = 1; i < n; i++) {
            result.push_back(mat[i][m - 1]);
        }

        if (n > 1) {
            for (int j = m - 2; j >= 0; j--) {
                result.push_back(mat[n - 1][j]);
            }
        }

        if (m > 1) {
            for (int i = n - 2; i > 0; i--) {
                result.push_back(mat[i][0]);
            }
        }

        return result;
    }
};
