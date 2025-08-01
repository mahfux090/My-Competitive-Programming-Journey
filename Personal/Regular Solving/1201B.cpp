#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int>a(n);
	long long s=0,m=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
		m=max(m,1LL*a[i]);
	}
	if(s%2==0 && m<=s/2)cout<<"YES";
	else cout<<"NO";
}
