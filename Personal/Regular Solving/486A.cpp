#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    long long e=n/2,o=n-e;
    cout<<(e*(e+1))-o*o;
}
