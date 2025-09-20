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
    map<ll, ll> c;
    for(int i=0;i<n;++i) {
        ll v;
        cin>>v;
        c[v]++;
    }
    set<pll> s;
    for(auto const& [val, freq] : c) {
        s.insert({freq, val});
    }
    ll a=0;
    ll b=0;
    bool at=true;
    while(!s.empty()){
        auto it=s.rbegin();
        ll f=it->first;
        ll v=it->second;
        if(f>1) {
            s.erase(*it);
            c.erase(v);
            if(at) a+=f;
            else b+=f;
            if(v>1) {
                if(c.count(v-1)) {
                    s.erase({c[v-1], v-1});
                    c[v-1]+=f;
                    s.insert({c[v-1], v-1});
                } else {
                    c[v-1]=f;
                    s.insert({f, v-1});
                }
            }
            at=!at;
        } else {
            ll cur_v=v;
            s.erase({1, cur_v});
            c.erase(cur_v);

            ll next_v=0;
            if(!c.empty()){
                next_v=c.rbegin()->first;
            }
            ll steps=cur_v-next_v;
            if(at){
                a+=(steps+1)/2;
                b+=steps/2;
            } else {
                b+=(steps+1)/2;
                a+=steps/2;
            }         
            if(steps%2!=0){
                at=!at;
            }
            if(next_v>0) {
                s.erase({1, next_v});
                c[next_v]++;
                s.insert({c[next_v], next_v});
            }
        }
    }
    cout<< a<<" "<<b<<lb;
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