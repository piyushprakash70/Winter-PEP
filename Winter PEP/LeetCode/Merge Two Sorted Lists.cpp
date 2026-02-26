class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* nl=new ListNode(0);
        ListNode* arr=nl;
        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val<=list2->val)
            {
                arr->next=list1;
                list1=list1->next;
            }
            else{
                arr->next=list2;
                list2=list2->next;
            }
            arr=arr->next;
        }
        if(list1!=NULL) arr->next=list1;
        if(list2!=NULL) arr->next=list2;
        
        return nl->next;
        
    }
};
