class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
           vector<Node*> ans={new Node(-1), new Node(INT_MAX)};
        Node* node=root;
        while(node){
            if(node->data>k){
                ans[1]=node;
                node = node->left;
            }
            else if(node->data<k){
                ans[0]=node;
                node = node->right;
            }
            else{
                if(node->left){
                    Node* t=node->left;
                    while(t->right) t=t->right;
                    ans[0]=t;
                }
                if(node->right){
                    Node* t=node->right;
                    while(t->left) t=t->left;
                    ans[1]=t;
                }
                break;
            }
        }
        
        if(ans[1]->data == INT_MAX) ans[1]->data=-1;
        return ans;
    }
};
