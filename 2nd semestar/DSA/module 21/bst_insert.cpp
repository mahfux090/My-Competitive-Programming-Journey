#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* level_input()
{
    int x;
    cin>>x;
    Node* root;
    if(x==-1)
        root =NULL;
    else{
        root=new Node(x);
    }
    queue<Node*>q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* n=q.front();
        int l,r;
        Node* myl;
        Node* myr;
        cin>>l>>r;
        if(l==-1)
            myl=NULL;
        else
            myl=new Node(l);
        if(r==-1)
            myr==NULL;
        else
            myr=new Node(r);
        n->left=myl;
        n->right=myr;
        if(n->left)
            q.push(n->left);
        if(n->right)
            q.push(n->right);
    }
    return root;
}
void insert_val(Node* &root, int x)
{
    if(root== NULL)
    {
        root=new Node(x);
        return;
    }
    if(root->val>x)
    {
        if(root->left==NULL)
            root->left=new Node(x);
        else
            insert_val(root->left,x);
    }
    else
    {
        if(root->right==NULL)
            root->right=new Node(x);
        else
            insert_val(root->right,x);    
    }
}
void print_level(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node*n=q.front();
        q.pop();
        cout<<n->val<<" ";
        if(n->left)
            q.push(n->left);
        if(n->right)
            q.push(n->right);
    }
}
int main()
{
    Node* root =level_input();
    int x;
    cin>>x;
    insert_val(root,x);
    print_level(root);
    return 0;
}