class Solution {
  public:
     int solve(Node* root,bool &bl){
         if(root == NULL){
             return 0;
         }
         int left = solve(root->left,bl);
         int right = solve(root->right,bl);
     if(!(root->data >= left && root->data >= right)){
             bl = false;
         }
         return root->data;
    }
    bool isHeap(Node* tree) {
        bool bl = true;
        Node* kuch = tree;
        int c = solve(tree,bl);
        if(!bl){
           return bl;
        }
        queue<Node*> q;
        q.push(kuch);
        q.push(NULL);
        int cnt = 0;
        while(!q.empty()){
           Node* ans = q.front();
           q.pop();
           if(ans){
               if(ans->left){
                   q.push(ans->left);
               }
               if(ans->right){
                   q.push(ans->right);
               }
           }
           else{
               cnt++;
               if(!q.empty()){
                   q.push(NULL);
               }
           }
        }
        q.push(kuch);
        q.push(NULL);
        int kcnt = 0;
        bool cl = false;
        int h = -1;
        while(!q.empty()){
           int g = 0;
           Node* ans = q.front();
           q.pop();
           if(ans){
               if(!ans->left){
                  int d = kcnt+2;
                  if(d<cnt){
                      return false;
                  }
                  g++;
               }
               if(ans->left){
                   if(cl){
                       int p = kcnt+1;
                       if(p == h){
                           return false;
                       }
                   }
                   q.push(ans->left);
               }
               if(!ans->right){
                  int d = kcnt+2;
                  if(d<cnt){
                      return false;
                  }
                  cl = true;
                  h = kcnt+1;
                  
               }
               if(ans->right){
                   if(g != 0){
                       return false;
                   }
                   q.push(ans->right);
               }
           }
           else{
               kcnt++;
               if(!q.empty()){
                   q.push(NULL);
               }
           }
        }
        return true;
         
        
        
    }
};
