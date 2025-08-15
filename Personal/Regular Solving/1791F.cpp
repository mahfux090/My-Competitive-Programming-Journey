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

vector<int> a;
vector<int> tree;

int S(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tl+tr)/2;
        build(2*v, tl, tm);
        build(2*v + 1, tm + 1, tr);
        tree[v] = max(tree[2*v], tree[2*v+1]);
    }
}

void update(int v, int tl, int tr, int l, int r) {
    if (tree[v] < 10 || tl > r || tr < l) {
        return;
    }
    if (tl==tr) {
        a[tl] = S(a[tl]);
        tree[v]=a[tl];
        return;
    }
    int tm=(tl+tr)/2;
    update(2*v, tl, tm, l, r);
    update(2*v+1, tm+1, tr, l, r);
    tree[v] = max(tree[2*v], tree[2*v + 1]);
}

void solve() {
    int n,q;
    cin>>n>>q;
    a.resize(n);
    tree.assign(4*n, 0);
    for(int i=0; i<n; i++) cin>>a[i];

    build(1, 0, n-1);

    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int l, r;
            cin>>l>>r;
            update(1,0,n-1,l-1,r-1);
        }else{
            int x;
            cin>>x;
            cout<< a[x-1] <<lb;
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