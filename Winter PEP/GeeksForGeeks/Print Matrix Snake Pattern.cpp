class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        vector<int> result;
        int rows = matrix.size();
        if (rows == 0) return result;
        int cols = matrix[0].size();
        for (int i = 0; i < rows; ++i) {
            if (i % 2 == 0) {
                for (int j = 0; j < cols; ++j)
                    result.push_back(matrix[i][j]);
            } 
            else {
                for (int j = cols - 1; j >= 0; --j)
                result.push_back(matrix[i][j]);
            }
        }
        return result;
    }
};
