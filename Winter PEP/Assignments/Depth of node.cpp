class Solution
{
    public:
        int depthOfOddLeaf(Node *root)
        {
            if(root == NULL)
                return 0;
            int level = 1;
            int count = 0;
            queue<Node *>q;
            q.push(root);
            while(!q.empty())
            {
                int n = q.size();
                for(int i = 0; i < n; i++)
                {
                    Node *temp = q.front();
                    q.pop();
                    if(level % 2 != 0)
                        if(temp->left == NULL && temp->right == NULL)
                            count = level;
                    if(temp->left != NULL)
                        q.push(temp->left);
                    if(temp->right != NULL)
                        q.push(temp->right);
                    if(i == n-1)
                        level++;
                }
            }
            return count;
        }
};
