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
    int n;
    cin>>n;
    string s;
    cin >> s;
    vector<int> z, o;
    vector<int> a(n);
    int k = 0;
    for(int i=0;i<n;i++){
        int p;
        if (s[i]=='0'){
            if(o.empty()){
                k++;
                p=k;
            }else{
                p = o.back();
                o.pop_back();
            }
            z.pb(p);
        } else {
            if(z.empty()){
                k++;
                p=k;
            }else{
                p=z.back();
                z.pop_back();
            }
            o.pb(p);
        }
        a[i]=p;
    }
    cout<<k<<endl;
    for(int i = 0; i< n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    fast
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//            Mahfuz Uddin                  //
//------------------------------------------//