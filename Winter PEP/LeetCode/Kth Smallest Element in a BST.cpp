class Solution {
public:
    void inorder(TreeNode* root, int &c, int &r, int k) {
        if (!root || r != -1) return;

        inorder(root->left, c, r, k);

        c++;
        if (c == k) {
            r = root->val;
            return;
        }

        inorder(root->right, c, r, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        int c = 0;
        int r = -1;
        inorder(root, c, r, k);
        return r;
    }
};
