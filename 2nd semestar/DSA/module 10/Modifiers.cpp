#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    mylist=mylistassign; //assign
    mylist.assign(list2.beging(),list2.end()) //O(N)
    
    mylist.push_bach();
    mylist.push_front();
    mylist.pop_back();
    mylist.pop_front();
    mylist.insert();
    mylist.erase();

    replace(mylist.begin(),mylist.end(),5,1);
    find(mylist.begin(),mylist.end(),5);

    return 0;
}