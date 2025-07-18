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
void print_linklist(Node* head)
{
    int val=0;
    Node* temp=head;
    while (temp!=NULL)
    {
        val++;
        temp=temp->next;
    }
    cout<<val;
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
    print_linklist(head);
      
    return 0;
}