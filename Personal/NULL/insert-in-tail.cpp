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
void insert_tail(Node* &head , int val)
{
    Node*newnode= new Node(val);
    if (head== NULL)
    {
        head=newnode;
    }
    Node *tem=head;
    while (tem->next!=NULL)
    {
        tem=tem->next;
    }
    tem->next=newnode;
};
void print(Node* head)
{
    Node*tem=head;
    while (tem!=NULL)
    {
        cout<<tem->val<<endl;
        tem=tem->next;
    }  
};
int main()
{
    Node* head =new Node(10);
    insert_tail(head,5);
    insert_tail(head, 100);
    print(head);
}