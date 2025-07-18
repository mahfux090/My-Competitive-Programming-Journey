#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long sum =n+m;
    long long mul=n*m;

    cout << n << " + " << m << " = " << sum << endl;
    cout << n << " * " << m << " = " << mul << endl;
    cout << n << " - " << m << " = " << n-m << endl;

    return 0;
}