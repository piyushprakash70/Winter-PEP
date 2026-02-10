class Solution {
  public:
    Node* segregate(Node* head) {
        vector<int> v;
        Node* curr = head;
        while (curr) {
            v.push_back(curr->data);
            curr = curr->next;
        }
        int c0 = 0, c1 = 0, c2 = 0;
        for (int x : v) {
            if (x == 0) c0++;
            else if (x == 1) c1++;
            else c2++;
        }
        curr = head;
        while (c0--) 
        { 
          curr->data = 0; 
          curr = curr->next; 
        }
        while (c1--) { 
          curr->data = 1; 
          curr = curr->next; 
        }
        while (c2--) 
        { 
          curr->data = 2; 
          curr = curr->next; 
        }

        return head;
    }
};
class Solution {
  public:
    Node* segregate(Node* head) {
        vector<int> v;
        Node* curr = head;
        while (curr) {
            v.push_back(curr->data);
            curr = curr->next;
        }

        int c0 = 0, c1 = 0, c2 = 0;
        for (int x : v) {
            if (x == 0) c0++;
            else if (x == 1) c1++;
            else c2++;
        }
        curr = head;
        while (c0--) 
        { 
          curr->data = 0; 
          curr = curr->next; 
        }
        while (c1--) 
        {
          curr->data = 1; 
          curr = curr->next; 
        }
        while (c2--) { 
          curr->data = 2; 
          curr = curr->next; 
        }
        return head;
    }
};
