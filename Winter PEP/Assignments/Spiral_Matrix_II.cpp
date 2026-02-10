class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int t = 0;
        int b = n - 1;
        int l = 0;
        int r = n - 1;
        int n1 = 1;

        while (t <= b && l <= r) {
            for (int j = l; j <= r; j++)
                mat[t][j] = n1++;
            t++;
            for (int i = t; i <= b; i++)
                mat[i][r] = n1++;
            r--;
            if (t <= b) {
                for (int j = r; j >= l; j--)
                    mat[b][j] = n1++;
                b--;
            }
            if (l <= r) {
                for (int i = b; i >= t; i--)
                    mat[i][l] = n1++;
                l++;
            }
        }

        return mat;
    }
};
