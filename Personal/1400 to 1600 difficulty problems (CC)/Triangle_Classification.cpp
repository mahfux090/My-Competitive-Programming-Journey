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

int sid;

void solve() {
    ll x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    ll d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    ll d2=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
    ll d3=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);

    string side_t;
    if(d1==d2||d2==d3||d1==d3){
        side_t="Isosceles";
    }else{
        side_t="Scalene";
    }

    if(sid==1){
        cout<<side_t<<" triangle"<<lb;
        return;
    }

    vector<ll> s;
    s.pb(d1);
    s.pb(d2);
    s.pb(d3);
    sort(all(s));

    string angle_t;
    if(s[0]+s[1]>s[2]){
        angle_t="acute";
    }else if(s[0]+s[1]==s[2]){
        angle_t="right";
    }else{
        angle_t="obtuse";
    }
    
    cout<<side_t<<" "<<angle_t<<" triangle"<<lb;
}

int main() {
    fast
    cin>>sid;
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}