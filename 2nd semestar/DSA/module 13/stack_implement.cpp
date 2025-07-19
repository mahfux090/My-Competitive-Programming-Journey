#include<bits/stdc++.h>
using namespace std;
class mystack
{
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
int main()
{
    mystack str;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        str.push(x);
    }
    while (!str.empty())
    {
        cout<< str.top() <<endl;
        str.pop();
    }
    
    
    
    return 0;
}