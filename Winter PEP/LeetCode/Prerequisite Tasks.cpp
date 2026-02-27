class Solution {
public:
    bool isPossible(int N, int P, vector<pair<int, int>>& prerequisites) {
        vector<vector<int>> adj(N);
        vector<int> indegree(N, 0);
        for (auto &pr : prerequisites) {
            int first = pr.first;
            int second = pr.second;
            adj[second].push_back(first);
            indegree[first]++;
        }
        queue<int> q;
        for (int i = 0; i < N; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }
        int count = 0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            count++;
            for (int neigh : adj[node]) {
                indegree[neigh]--;
                if (indegree[neigh] == 0)
                    q.push(neigh);
            }
        }

        return count == N;
    }
};
