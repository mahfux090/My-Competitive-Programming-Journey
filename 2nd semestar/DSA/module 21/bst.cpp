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
Node* input_level()
{
    Node* root;
    int x;
    cin>>x;
    if(x==-1)
        root=NULL;
    else
        root =new Node(x);
    queue<Node*>q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* node=q.front();
        q.pop();
        int l,r;
        Node* myl;
        Node* myr;
        cin>>l>>r;
        if(l==-1)
            myl=NULL;
        else
            myl=new Node(l);
        if(r==-1)
            myr=NULL;
        else
            myr=new Node(r);
        node->left=myl;
        node->right=myr;
        if(node->left)
            q.push(node->left);
        if(node->right)
            q.push(node->right);
    }
    return root; 
}
bool search(Node* root ,int val)
{
    if(root==NULL) return false;
    if(root->val==val) return true;
    if(root->val>val)
        return search(root->left,val);
    else
        return search(root->right,val);
}
int main()
{
    Node* root=input_level();
    int x;
    cin>>x;
    if(search(root,x))
        cout<<"Found";
    else cout<<"Not Found"; 
    return 0;
}