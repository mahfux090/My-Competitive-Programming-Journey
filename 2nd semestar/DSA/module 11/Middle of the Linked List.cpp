class Solution {
public:
int sizez(ListNode* head)
{
    int sz=0;
    ListNode* tem=head;
    while(tem!=NULL)
    {
        sz++;
        tem=tem->next;
    }
    return sz;
}
    ListNode* middleNode(ListNode* head) {
        int sz=sizez(head);
        ListNode* tem=head;
        for(int i=0; i<sz/2;i++){
            tem=tem->next;
        }
        return tem;
        
    }
};