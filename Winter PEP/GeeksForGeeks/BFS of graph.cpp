class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int v=adj.size();
        vector<int>r;
        vector<bool>visited(v,false);
        queue<int> q;
        visited[0] = true;
        q.push(0);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            r.push_back(node);
            for(int n:adj[node])
            {
                if(!visited[n])
                {
                    visited[n]=true;
                    q.push(n);
                }
            }
        }
        return r;
    }
};
