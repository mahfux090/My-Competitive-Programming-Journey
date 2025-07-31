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
void left_print(Node* root)
{
    if(root==NULL) return;
    if(root->left)
        left_print(root->left);
    else if(root->right)
        left_print(root->right);

    cout<<root->val<<" ";
}
void right_print(Node* root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    if(root->right)
        right_print(root->right);
    else if(root->left)
        right_print(root->left);
}
void print_out(Node* root)
{
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->val;
        return;
    }
    left_print(root->left);
    cout<<root->val<<" ";
    right_print(root->right);
}
int main()
{
    Node *root =level_order_input();
    print_out(root);
}