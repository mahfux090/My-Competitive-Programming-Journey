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
void insert_any(Node* &head,int pos,int val)
{
    Node* newnode=new Node(val);
    Node* tem=head;
    for (int  i = 0; i <pos; i++)
    {
        tem=tem->next;
    }
    newnode->next=tem->next;
    tem->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tem;
    
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
    insert_any(head,1,50);
    rev_print(tail);
    return 0;
}