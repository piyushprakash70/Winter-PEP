class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeros;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    zeros.push_back({i,j});
                }
            }
        }
        for(auto cord:zeros)
        {
            int r=cord.first;
            int c=cord.second;
            for(int i=0;i<m;i++)
            {
                matrix[r][i]=0;
            }
            for(int i=0;i<n;i++)
            {
                matrix[i][c]=0;
            }
        }
    }
};
