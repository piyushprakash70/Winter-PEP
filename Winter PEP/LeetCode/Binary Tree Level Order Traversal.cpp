class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL) return res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int n = q.size();
            vector<int> l;
            
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                l.push_back(node->val);
                
                if (node->left != NULL) q.push(node->left);
                if (node->right != NULL) q.push(node->right);
            }
            
            res.push_back(l);
        }
        
        return res;
    }
};
