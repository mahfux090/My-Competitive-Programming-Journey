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
vector<int>l;
void leaf_node(Node* root)
{
   if(root==NULL) return;
   if(root->left==NULL & root->right==NULL)
   {
    l.push_back(root->val);
   }
   leaf_node(root->left);
   leaf_node(root->right);

}

int main()
{
    Node *root =level_order_input();
    leaf_node(root);
    sort(l.begin(),l.end(),greater<int>());
    for(int x:l)
    {
        cout<<x<<" ";
    }

}