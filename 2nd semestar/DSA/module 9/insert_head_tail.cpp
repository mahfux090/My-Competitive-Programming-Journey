#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_head(Node*&head, Node* &tail ,int val)
{
    Node*newn=new Node(val);
    if(head==NULL)
    {
        head=newn;
        tail=newn;
        return;
    }
    newn->next=head;
    head->prev=newn;
    head=newn;
}
void insert_tail(Node*&head,Node*&tail,int val)
{
    Node*newn=new Node(val);
    if(tail==NULL)
    {
        tail=newn;
        head=newn;
        return;
    }
    newn->prev=tail;
    tail->next=newn;
    tail=newn;
}

void rev_print(Node* tail)
{
    Node*tem=tail;
    while (tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->prev;
    }
    
}
int main()
{
    Node*head = new Node(10);
    Node* a= new Node(20);
    Node* b=new Node(30);
    Node * tail=b;

    head->next=a;
    a->next=b;
    b->prev=a;
    a->prev=head;
    insert_head(head,tail,50);
    insert_tail(head,tail,60);
    rev_print(tail);
    return 0;
}