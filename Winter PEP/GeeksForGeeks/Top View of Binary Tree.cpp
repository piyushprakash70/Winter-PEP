class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int> res;
        if (!root) return res;

        map<int, vector<int>> nodes;
        queue<pair<Node*, int>> q;

        q.push({root, 0});

        while (!q.empty()) {
            auto p = q.front();
            q.pop();

            Node* node = p.first;
            int x = p.second;

            nodes[x].push_back(node->data);

            if (node->left) {
                q.push({node->left, x - 1});
            }
            if (node->right) {
                q.push({node->right, x + 1});
            }
        }

        for (auto &p : nodes) {
            res.push_back(p.second[0]);
        }

        return res;
    }
};
