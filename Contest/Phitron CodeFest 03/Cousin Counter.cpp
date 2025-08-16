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
int fre[101];
void find_it(Node* root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        fre[root->val]++;
    }
    find_it(root->left);
    find_it(root->right);
}
int main()
{
    Node *root =level_order_input();
    find_it(root);
    int ans=101,count=0;
    for (int i = 0; i <101; i++)
    {
        if(fre[i]>count || (fre[i]==count && ans>i))
        {
            count=fre[i];
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}