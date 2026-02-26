class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head= new Node(arr[0]);
        Node* curr=head;
        for(int i=1;i<arr.size();i++)
        {
            Node* newNode=new Node(arr[i]);
            curr->next=newNode;
            newNode->prev=curr;
            curr=newNode;
            
        }
        return head;
    }
};
