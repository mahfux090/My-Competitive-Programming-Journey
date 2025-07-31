#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *level_order_input()
{
    int n;
    cin >> n;
    Node *root;
    if (n == -1)
        root = NULL;
    else
    {
        root = new Node(n);
    }
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myr;
        if(l==-1)
        {myleft=NULL;}
        else{
            myleft=new Node(l);
        } 
        if(r==-1)
            myr=NULL;
        else{
            myr=new Node(r);
        }
        p->left=myleft;
        p->right=myr;
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void level_node(Node* root, int x)
{
    queue<pair<Node*,int>>q;
    if(root)
        q.push({root,0});
    int flag=0;
    while (!q.empty())
    {
        pair<Node*,int>p=q.front();
        Node* node=p.first;
        int level=p.second;
        q.pop();
        if(level==x)
        {
            cout<<node->val<<" ";
            flag=1;
        }
        if(node->left)
            q.push({node->left,level+1});
        if(node->right)
            q.push({node->right,level+1});
    }
    if(flag==0)
        cout<<"Invalid";
}
int main()
{
    Node *root =level_order_input();
    int x;
    cin>>x;
    level_node(root,x);
}