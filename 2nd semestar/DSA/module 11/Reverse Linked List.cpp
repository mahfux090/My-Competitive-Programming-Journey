class Solution {
public:
void reverse(ListNode* &head,ListNode* tem)
{
    if(tem->next==NULL){
        head=tem;
        return;
    }
    reverse(head,tem->next);
    tem->next->next=tem;
    tem->next=NULL;
}
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        reverse(head,head);
        return head;
    }
};