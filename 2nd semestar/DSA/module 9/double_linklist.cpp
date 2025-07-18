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
    rev_print(tail);
    return 0;
}