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
    
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int dup(Node* head)
{
    int fre[100]={0};
    Node* tem=head;
     while (tem!=NULL)
     {
        fre[tem->val]++;
        tem=tem->next;
     }
     int flag=1;
    for (int i = 0; i < 100; i++)
    {
        if (fre[i]>1)
        {
            flag=0;
        }
    }
    return flag;
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
    int c=dup(head);
    if(c==1)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}