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

bool is_superior(const vector<int>& r1, const vector<int>& r2) {
    int c=0;
    for(int i=0; i<5; ++i) {
        if(r1[i]<r2[i]) {
            c++;
        }
    }
    return c>=3;
}

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> r(n, vector<int>(5));
    for(int i=0; i<n; ++i) {
        for(int j=0; j<5; ++j) {
            cin>>r[i][j];
        }
    }

    int cand=0;
    for(int i=1; i<n; ++i) {
        if(is_superior(r[i],r[cand])) {
            cand=i;
        }
    }

    bool is_winner=true;
    for(int i=0; i<n; ++i) {
        if(i==cand) continue;
        if(!is_superior(r[cand],r[i])) {
            is_winner=false;
            break;
        }
    }

    if(is_winner) {
        cout<<cand+1<<lb;
    } else {
        cout<<-1<<lb;
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