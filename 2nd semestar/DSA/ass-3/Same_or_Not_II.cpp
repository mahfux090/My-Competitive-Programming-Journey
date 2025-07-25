#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
     public:
    vector<int>v;
    void push(int val){
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
       return v.back();
    }
    int size(int)
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class myqueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newnode=new Node(val);
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next = newnode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    if (n!=m)
    {
        cout<<"NO";
        return 0;
    }
    mystack st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    myqueue q;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    int flag=1;
    while (!st.empty())
    {
        if(st.top()==q.front())
        {
            st.pop();
            q.pop();
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }  
    else{
        cout<<"NO";
    }
    return 0;
}