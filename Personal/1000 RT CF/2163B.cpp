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
    vector<int> a(n+1);
    vector<int> ps(n+1); 
    for(int i=1;i<=n;++i){
        cin>>a[i];
        ps[a[i]]=i;
    }
    string x;
    cin>>x;
    x=" "+x; 
    
    if(x[1]=='1'||x[n]=='1'){
        cout<<-1<<lb;
        return;
    }
    
    int p1=ps[1]; 
    int pn=ps[n]; 
    
    int lm=min(p1,pn); 
    int rm=max(p1,pn); 
    
    set<pii> ops; 
    
    if(lm<rm) ops.insert({lm,rm});
    if(1<lm) ops.insert({1,lm});
    if(1<rm) ops.insert({1,rm});
    if(lm<n) ops.insert({lm,n});
    if(rm<n) ops.insert({rm,n});
    
    string s(n+1,'0');
    
    for(auto o:ops){
        int l=o.ff;
        int r=o.ss;
        
        int vl=a[l];
        int vr=a[r]; 
        int vmn=min(vl,vr);
        int vmx=max(vl,vr); 
        
        for(int i=l+1;i<r;++i){
            if(a[i]>vmn&&a[i]<vmx){
                s[i]='1';
            }
        }
    }
    
    bool ok=true; 
    for(int i=1;i<=n;++i){
        if(x[i]=='1'&&s[i]=='0'){
            ok=false;
            break;
        }
    }
    
    if(ok){
        cout<<sz(ops)<<lb;
        for(auto o:ops){
            cout<<o.ff<<" "<<o.ss<<lb;
        }
    }else{
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