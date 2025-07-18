class Solution {
public:
void insert_tail(ListNode* &head, ListNode* &tail,int val)
{
    ListNode* newnode=new ListNode(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
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
    bool isPalindrome(ListNode* head) {
        ListNode* newhead=NULL;
        ListNode* newtail=NULL;
        ListNode* tem=head;
        while(tem!=NULL)
        {
            insert_tail(newhead,newtail,tem->val);
            tem=tem->next;
        }
        reverse(newhead,newhead);
        tem=head;
        ListNode* tem2=newhead;
        while(tem!=NULL)
        {
            if(tem->val!=tem2->val)
            {
               return false;
            }
             tem=tem->next;
                tem2=tem2->next;
        }
        return true;

    }
};