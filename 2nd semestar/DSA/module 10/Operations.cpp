#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Operations
    list<int>my;
    my.remove(v);//O(N)
    my.sort();//O(Nlog n)
    my.sort(greater<int>);//O(N log N)
    my.unique();//O(N)
    my.reverse();//O(N)

    //Element access
    my.back(); //O(1)
    my.front(); //O(1)
    next(my.begin(),i); //O(N)

    //Iterators
    my.begin(); //O(1)
    my.end(); //O(1)

    return 0;
}