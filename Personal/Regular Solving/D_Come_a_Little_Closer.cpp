// Author: Mahfuz Uddin
// Problem: D. Come a Little Closer
// URL: https://codeforces.com/problemset/problem/2114/D
// Date: 2025-07-25 12:04
// Language: C++
// Start From Here......
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long t,n,s1,s2,ans,x[N],y[N],xs[N],ys[N];
int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0;i<n;i++) {
			cin >> x[i] >> y[i];
			xs[i]=x[i]; ys[i]=y[i];
		}
		sort(xs,xs+n);
		sort(ys,ys+n);
		ans=(xs[n-1]-xs[0]+1)*(ys[n-1]-ys[0]+1);
		for(int i=0;i<n&&n!=1;i++) {
			s1=xs[n-1-(xs[n-1]==x[i])]-xs[xs[0]==x[i]]+1;
			s2=ys[n-1-(ys[n-1]==y[i])]-ys[ys[0]==y[i]]+1;
			if(s1*s2!=n-1) ans=min(ans,s1*s2);
			else ans=min({ans,s1*(s2+1),s2*(s1+1)});
		}
		cout << ans << endl;
	}
}