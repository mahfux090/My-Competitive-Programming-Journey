#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;cin>>n>>k;
	long long l=1,r=n,ans=n;
	while(l<=r){
		long long m=(l+r)/2,s=0,x=m;
		while(x>0){
			s+=x;
			x/=k;
		}
		if(s>=n){
			ans=m;
			r=m-1;
		}
		else l=m+1;
	}
	cout<<ans;
}
