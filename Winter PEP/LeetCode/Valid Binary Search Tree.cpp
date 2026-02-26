class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long long min1 = LONG_MIN;
        long long max1 = LONG_MAX;
        return isValidBST(root, min1, max1);
    }

    bool isValidBST(TreeNode* root, long long minVal, long long maxVal) {
        if (root == nullptr) {
            return true;
        }
        
        if (root->val <= minVal || root->val >= maxVal) {
            return false;
        }
        
        return isValidBST(root->left, minVal, root->val) && isValidBST(root->right, root->val, maxVal);
    }
};
