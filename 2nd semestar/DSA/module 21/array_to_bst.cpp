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
Node* con(int a[],int x,int l,int r)
{
    if(l>r)
        return NULL;
    int mid=(l+r)/2;
    Node* root =new Node(a[mid]);
    Node * rootl=con(a,x,l,mid-1);
    Node*  rootr=con(a,x,mid+1,r);
    root->left=rootl;
    root->right=rootr;
    return root;

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
    int x;
    cin>>x;
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    Node* root =con(a,x,0,x-1);
    print_level(root);
    return 0;
}