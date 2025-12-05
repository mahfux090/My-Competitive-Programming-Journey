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
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>> s;

    for(char c='a'; c<='z'; c++){
        string t = "";
        t += c;
        if(s.find(t) == string::npos){
            cout << t << lb;
            return;
        }
    }

    for(char c1='a'; c1<='z'; c1++){
        for(char c2='a'; c2<='z'; c2++){
            string t="";
            t+=c1; t+=c2;
            if(s.find(t)==string::npos){
                cout<<t<<lb;
                return;
            }
        }
    }

    for(char c1='a'; c1<='z'; c1++){
        for(char c2='a';c2<='z'; c2++){
            for(char c3='a'; c3<='z'; c3++){
                string t="";
                t+=c1; t+=c2;t+=c3;
                if(s.find(t) == string::npos){
                    cout << t << lb;
                    return;
                }
            }
        }
    }
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
//          M a h f u z U d d i n           //
//------------------------------------------//