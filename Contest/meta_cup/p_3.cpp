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

void solve(int cs) {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<pii> pms;
    int i=0;
    while(i<n){
        int v=a[i];
        if(v==1){
            int k=1;
            while(i+k<n&&a[i+k]==k+1){
                k++;
            }
            pms.pb({k,0});
            i+=k;
        } else {
            int k=v;
            int j=1;
            while(i+j<n&&a[i+j]!=1){
                k=max(k,a[i+j]);
                j++;
            }
            int preL=j;
            int sufL=v-1;
            int kL=preL+sufL;
            
            k=v;
            bool ok=true;
            for(int l=0;l<preL;l++){
                if(a[i+l]!=v+l) ok=false;
                k=max(k,a[i+l]);
            }
            for(int l=0;l<sufL;l++){
                if(i+preL+l>=n||a[i+preL+l]!=l+1) ok=false;
            }
            
            if(ok){
                pms.pb({k,v-1});
                i+=kL;
            } else {
                 k=v;
                int l=1;
                while(i+l<n&&a[i+l]==v+l) l++;
                k=v+l-1;
                pms.pb({k,v-1});
                i+=k;
            }
        }
    }
    
    vector<pair<int,int>> ops;
    vector<int> radd;
    int cR=0;
    
    for(auto p : pms){
        int k=p.ff;
        int r=p.ss;
        
        ops.pb({1,k});
        radd.pb(cR);
        
        int tR=cR;
        while(true){
            bool ok=true;
            for(int j=0;j<sz(pms);j++){
                if(j>=sz(radd)) break;
                int kj=pms[j].ff;
                int rj=pms[j].ss;
                int raj=radd[j];
                
                int rem=(tR-raj)%kj;
                if(rem<0) rem+=kj;
                if(rem!=rj){
                    ok=false;
                    break;
                }
            }
            if(ok) break;
            tR++;
        }
        
        int diff=tR-cR;
        for(int j=0;j<diff;j++) ops.pb({2,0});
        cR=tR;
    }

    cout<<"Case #"<<cs<<": "<<sz(ops)<<lb;
    for(auto p:ops){
        cout<<p.ff;
        if(p.ff==1) cout<<" "<<p.ss;
        cout<<lb;
    }
}

int main() {
    fast
    int t=1;
    cin >> t;
    for(int i=1; i<=t; i++) {
        solve(i);
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//