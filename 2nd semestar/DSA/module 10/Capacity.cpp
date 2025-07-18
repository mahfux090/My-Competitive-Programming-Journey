#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    mylist.size(); //size O(1)
    mylist.max_size(); //max size O(1) 
    mylist.clear (); // clear element not from memory O(N)
    mylist.empty(); // return ture false O(1)
    mylist.resize(); // change the size O(K)

    return 0;
}