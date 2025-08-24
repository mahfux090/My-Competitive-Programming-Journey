// Allen এর ব্যাংকে n ডলার আছে।
// সে সব টাকা cash এ তুলতে চায়।

// Dollar bills এর মান আছে শুধু এই 5 টা:

// 1, 5, 10, 20, 100


// প্রশ্ন: Minimum কয়টা note/bill লাগবে সব টাকা তুলতে?

// Logic (Greedy):

// আমরা সবসময় সবচেয়ে বড় note আগে ব্যবহার করবো।

// কারণ:
// যত বড় note নিবো → তত কম note লাগবে।

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int count=0;

    while (n!=0)
    {
        if (n>=100)
        {
            n=n-100;
            count++;
        }
        else if (n>=20)
        {
            n=n-20;
            count++;
        }
        else if (n>=10)
        {
            n=n-10;
            count++;
        }
        else if (n>=5)
        {
            n=n-5;
            count++;
        }
        else 
        {
            n=n-1;
            count++;
        }
        
    }
    cout<<count;
    return 0;
}