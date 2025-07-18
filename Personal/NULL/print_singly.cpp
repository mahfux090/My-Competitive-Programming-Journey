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
int main()
{
    Node* head =new Node(100);
    Node * a=new Node (220);
    Node * b=new Node (320);
    Node * c=new Node (420);

    head->next=a;
    a->next=b;
    b->next=c;

    Node* temp=head;
    while(temp !=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    return 0;
}