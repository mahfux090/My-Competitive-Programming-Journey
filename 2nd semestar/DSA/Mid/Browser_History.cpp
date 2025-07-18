#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    string val;
    Node*next;
    Node*pre;
    Node(string val){
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
    }
};
void insert_tail(Node* &head,Node* &tail,string val)
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
    Node* tail=NULL;
    Node* curr=NULL;
    string s;
    while (cin>>s && s!="end")
    {
        insert_tail(head,tail,s);
    }
    int q;
    cin>>q;
    while (q--)
    {
        string c;
        cin>>c;
        
        if(c=="visit")
        {
            string address;
            cin >> address;
            Node *tem = head;
            int flag = 0;
            while (tem != NULL)
            {
                if (address == tem->val)
                {
                    cout << tem->val << endl;
                    flag = 1;
                    curr=tem;
                    break;
                }
                tem = tem->next;
            }
            if (flag == 0)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (c=="next")
        {
            if (curr!=NULL && curr->next!=NULL)
            {
                curr=curr->next;
                cout<<curr->val<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }
        else if (c=="prev")
        {
            if (curr!=NULL && curr->pre!=NULL)
            {
                curr=curr->pre;
                cout<<curr->val<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
    }
    return 0;
}