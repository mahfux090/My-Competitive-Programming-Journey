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

int n;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

// চেক করে (r, c) গ্রিডের ভেতরে আছে কিনা
bool ib(int r,int c){
    return r>=0&&r<n&&c>=0&&c<n;
}

// চেক করে (r, c) সেলে '#' বসালে ৩-টানা-সেলের শর্ত ভাঙ্গে কিনা
bool cs(int r,int c,const vector<string>&g){
    if(ib(r,c-1)&&g[r][c-1]=='#'&&ib(r,c-2)&&g[r][c-2]=='#')return false;
    if(ib(r,c-1)&&g[r][c-1]=='#'&&ib(r,c+1)&&g[r][c+1]=='#')return false;
    if(ib(r,c+1)&&g[r][c+1]=='#'&&ib(r,c+2)&&g[r][c+2]=='#')return false;
    if(ib(r-1,c)&&g[r-1][c]=='#'&&ib(r-2,c)&&g[r-2][c]=='#')return false;
    if(ib(r-1,c)&&g[r-1][c]=='#'&&ib(r+1,c)&&g[r+1][c]=='#')return false;
    if(ib(r+1,c)&&g[r+1][c]=='#'&&ib(r+2,c)&&g[r+2][c]=='#')return false;
    return true;
}

void solve() {
    cin>>n;
    vector<string> g(n); // ইনপুট গ্রিড
    vector<string> fg(n); // ফাইনাল গ্রিড
    vector<pii> o; // মূল '#' সেলগুলোর অবস্থান
    for(int i=0;i<n;++i){
        cin>>g[i];
        fg[i]=g[i];
        for(int j=0;j<n;++j){
            if(g[i][j]=='#'){
                o.pb({i,j});
            }
        }
    }

    // ১. প্রাথমিক যাচাই
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(g[i][j]=='#'){
                if(j>=2&&g[i][j-1]=='#'&&g[i][j-2]=='#'){
                    cout<<"NO"<<lb;
                    return;
                }
                if(i>=2&&g[i-1][j]=='#'&&g[i-2][j]=='#'){
                    cout<<"NO"<<lb;
                    return;
                }
            }
        }
    }

    // ২. খালি গ্রিড
    if(o.empty()){
        cout<<"YES"<<lb;
        return;
    }

    // ৩. "গ্রোয়িং" BFS
    queue<pii> q;
    vector<vector<bool>>inq(n,vector<bool>(n,false));

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(g[i][j]=='.'){
                bool ao=false; // মূল '#' সেলের পাশে?
                for(int k=0;k<4;++k){
                    int ni=i+dx[k];
                    int nj=j+dy[k];
                    if(ib(ni,nj)&&g[ni][nj]=='#'){
                        ao=true;
                        break;
                    }
                }
                if(ao){
                    q.push({i,j});
                    inq[i][j]=true;
                }
            }
        }
    }

    while(!q.empty()){
        pii p=q.front();
        q.pop();
        int r=p.ff;
        int c=p.ss;

        if(cs(r,c,fg)){ // যদি বসানো সেফ হয়
            fg[r][c]='#'; // পেইন্ট করি
            for(int k=0;k<4;++k){
                int nr=r+dx[k];
                int nc=c+dy[k];
                // নতুন সাদা প্রতিবেশীদের কিউ-তে দেই
                if(ib(nr,nc)&&fg[nr][nc]=='.'&&!inq[nr][nc]){
                    inq[nr][nc]=true;
                    q.push({nr,nc});
                }
            }
        }
    }

    // ৪. চূড়ান্ত সংযোগ যাচাই
    vector<vector<bool>>vis(n,vector<bool>(n,false));
    queue<pii>qd; // কানেক্টিভিটি চেক-এর BFS
    qd.push(o[0]);
    vis[o[0].ff][o[0].ss]=true;

    while(!qd.empty()){
        pii p=qd.front();
        qd.pop();
        for(int k=0;k<4;++k){
            int nr=p.ff+dx[k];
            int nc=p.ss+dy[k];
            if(ib(nr,nc)&&!vis[nr][nc]&&fg[nr][nc]=='#'){
                vis[nr][nc]=true;
                qd.push({nr,nc});
            }
        }
    }

    // মূল সব '#' সেল ভিজিট হয়েছে কিনা দেখি
    for(auto p:o){
        if(!vis[p.ff][p.ss]){
            cout<<"NO"<<lb;
            return;
        }
    }

    cout<<"YES"<<lb;
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