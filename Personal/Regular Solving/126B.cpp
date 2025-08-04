#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    string s;
    cin >> s;
    int n=sz(s);
    vector<int> p(n);
    for (int i=1; i<n; i++) {
        int j=p[i-1];
        while (j>0 && s[i]!=s[j]) {
            j = p[j-1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        p[i]=j;
    }

    int l = p[n-1];
    if(l==0){
        cout<<"Just a legend"<<endl;
        return;
    }
    
    vector<bool> f(n + 1, false);
    for(int i=0;i<n-1;i++){
        f[p[i]]=true;
    }
    
    while(l>0){
        if(f[l]){
            cout<<s.substr(0,l)<<endl;
            return;
        }
        l=p[l-1];
    }

    cout << "Just a legend" << endl;
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          Mahfuz Uddin                  //
//------------------------------------------//