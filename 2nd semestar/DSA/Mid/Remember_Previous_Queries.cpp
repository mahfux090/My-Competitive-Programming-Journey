#include<bits/stdc++.h>
using namespace std;
void print_left(list<int>mylist)
{
    cout<<"L -> ";
    for (int i : mylist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
void print_right(list<int>mylist)
{
    cout<<"R -> ";
    mylist.reverse();
    for (int i : mylist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int>mylist;
    int q;
    cin>>q;
    while (q--)
    {
        int x,val;
        cin>>x>>val;
        if (x==0)
        {
            mylist.push_front(val);
        }
        else if (x==1)
        {
            mylist.push_back(val);
        }
        else if (x==2)
        {
            if (val>=0 && val<mylist.size())
            {
                mylist.erase(next(mylist.begin(),val));
            }
        }
        print_left(mylist);
        print_right(mylist);
    }
    return 0;
}