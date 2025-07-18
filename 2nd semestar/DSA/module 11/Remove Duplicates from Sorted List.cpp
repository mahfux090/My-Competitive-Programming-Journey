class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* tem=head;
        while(tem->next!=NULL)
        {
            if(tem->val==tem->next->val){
                tem->next=tem->next->next;
            }
            else{
                tem=tem->next;
            }
        }
        return head;
    }
};