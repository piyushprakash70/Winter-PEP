class Solution {
  public:
    vector<int> dfs(vector<vector<int>> &adj) {
        int v = adj.size();
        vector<int> r;
        vector<bool> visited(v, false);
        stack<int> s;
        
        s.push(0);
        
        while (!s.empty()) {
            int node = s.top();
            s.pop();
            if (!visited[node]) {
                visited[node] = true;
                r.push_back(node);
                for (int i = adj[node].size() - 1; i >= 0; --i) {
                    int n = adj[node][i];
                    if (!visited[n]) {
                        s.push(n);
                    }
                }
            }
        }
        return r;
    }
};
