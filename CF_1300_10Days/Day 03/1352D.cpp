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
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int l=0, r=n-1;
    int moves=0;
    int at=0, bt=0;
    int last_a=0, last_b=0;
    bool is_a_turn=true;

    while(l<=r){
        moves++;
        if(is_a_turn){
            int cur_a=0;
            while(l<=r){
                cur_a+=a[l];
                l++;
                if(cur_a>last_b){
                    break;
                }
            }
            at+=cur_a;
            last_a=cur_a;
        }else{
            int cur_b=0;
            while(l<=r){
                cur_b+=a[r];
                r--;
                if(cur_b>last_a){
                    break;
                }
            }
            bt+=cur_b;
            last_b=cur_b;
        }
        is_a_turn=!is_a_turn;
    }
    cout<<moves<<" "<<at<<" "<<bt<<lb;
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