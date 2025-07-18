#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*pre;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
    }
};
int sizez(Node* head)
{
    Node*tem=head;
    int sz=0;
    while (tem!=NULL)
    {
        sz++;
        tem=tem->next;
    }
    return sz;
}
void print_left(Node* head)
{
    cout<<"L -> ";
    Node* l=head;
    while (l!=NULL)
    {
        cout<<l->val<<" ";
        l=l->next;
    }
    cout<<endl;
}
void print_right(Node* tail)
{
    cout<<"R -> ";
    Node* r=tail;
    while (r!=NULL)
    {
        cout<<r->val<<" ";
        r=r->pre;
    }
    cout<<endl;
}
void insert_val(Node* &head,Node* &tail,int idx,int val)
{
    int sz=sizez(head);
    if (idx>sz)
    {
        cout<<"Invalid"<<endl;
        return;
    }
    Node* newnode=new Node(val);
    if (idx==0)
    {
       if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
    }
    }
    else if (idx==sz)
    {
        newnode->pre=tail;
        tail->next=newnode;
        tail=newnode;
    }
    else{
        Node* tem=head;
        for (int i = 0; i < idx-1; i++)
        {
            tem=tem->next;
        }
        newnode->next=tem->next;
        tem->next->pre=newnode;
        newnode->pre=tem;
        tem->next=newnode;
    }
    print_left(head);
    print_right(tail);
     
}

int main()
{
    Node* head=NULL;
    Node*tail=NULL;
    int q;
    cin>>q;
    while (q--)
    {
        int idx,val;
        cin>>idx>>val;
        insert_val(head,tail,idx,val);
    }
    return 0;
}