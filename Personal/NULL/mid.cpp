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
   int  val=size_linklist(head);
    int mid=val/2;
        if (val%2==0)
        {
            for (int  i = 0; i <mid-1; i++)
            {
                tem=tem->next;
            }
            cout<<tem->val<<" "<<tem->next->val;
        }
        else{
            for (int i = 0; i < mid; i++)
            {
                tem=tem->next;
            }
            cout<<tem->val;
        }
    
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