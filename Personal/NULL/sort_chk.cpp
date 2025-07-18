#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert(Node* &head, Node* &tail ,int val)
{
    Node* newnode=new Node(val);
    if (head==NULL)
    {
        head= newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int size_linklist(Node* head)
{
    int val=0;
    Node* temp=head;
    while (temp!=NULL)
    {
        val++;
        temp=temp->next;
    }
    return val;
}
void print_mid(Node* head)
{
    Node* tem=head;
    while (tem!=NULL && tem->next!=NULL)
    {
        if (tem->val>tem->next->val)
        {
            cout<<"NO";
            return;
        }
        tem=tem->next;
    }
    cout<<"YES";
}
int main()
{
    Node* head = NULL;
    Node* tail= NULL;
    int val;
    while (cin>>val && val!=-1)
    {
     insert(head, tail, val);   
    }
    print_mid(head);
      
    return 0;
}