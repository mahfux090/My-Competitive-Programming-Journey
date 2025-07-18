#include<bits/stdc++.h>
using namespace std;
int main()
{
    //type 1
    list<int>mylist; //list<data_type>listname
    //type 2
    list<int>mylist[2];  //with size
    //type 3
    list<int>mylist[5,0]; // value set 
    //t-4
    list<int >mylist(mylist) //copy list 
    //t-5
    list<int>mylist(a,a+n); // copy array 

    return 0;
}