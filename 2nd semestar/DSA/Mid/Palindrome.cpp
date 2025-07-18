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
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->pre=tail;
        tail=newnode;
    }
}
int main()
{
    Node* head=NULL;
    Node*tail=NULL;
    int val;
    while (cin>>val && val!=-1)
    {
        insert_tail(head,tail,val);
    }
    Node*i=head;
    Node*j=tail;
    int flag=1;
    while (i!=j && i->pre!=j)
    {
        if (i->val!=j->val)
        {
            flag=0;
            break;
        }
        i=i->next;
        j=j->pre;
    }
    if (flag==1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

    return 0;
}