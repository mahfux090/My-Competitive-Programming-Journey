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

int dr[]={0,0,1,-1};
int dc[]={1,-1,0,0};

void solve(int cs) {
    int r,c,s;
    cin>>r>>c>>s;
    vector<string> g(r);
    for(int i=0;i<r;i++) cin>>g[i];

    vector<vector<int>> d(r,vector<int>(c,INF));
    queue<pii> q;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(g[i][j]=='#'){
                d[i][j]=0;
                q.push({i,j});
            }
        }
    }

    while(!q.empty()){
        pii t=q.front();
        q.pop();
        int cr=t.ff;
        int cc=t.ss;

        for(int i=0;i<4;i++){
            int nr=cr+dr[i];
            int nc=cc+dc[i];
            if(nr>=0&&nr<r&&nc>=0&&nc<c&&d[nr][nc]==INF){
                d[nr][nc]=d[cr][cc]+1;
                q.push({nr,nc});
            }
        }
    }

    vector<vector<bool>> sf(r,vector<bool>(c,false));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(g[i][j]=='#') continue;
            int dw=min({i+1,r-i,j+1,c-j});
            int df=min(d[i][j],dw);
            if(df>=s+1){
                sf[i][j]=true;
            }
        }
    }

    int ma=0;
    vector<vector<bool>> v(r,vector<bool>(c,false));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(sf[i][j]&&!v[i][j]){
                int ca=0;
                stack<pii> st;
                st.push({i,j});
                v[i][j]=true;

                while(!st.empty()){
                    pii t=st.top();
                    st.pop();
                    ca++;
                    int cr=t.ff;
                    int cc=t.ss;

                    for(int k=0;k<4;k++){
                        int nr=cr+dr[k];
                        int nc=cc+dc[k];
                        if(nr>=0&&nr<r&&nc>=0&&nc<c&&sf[nr][nc]&&!v[nr][nc]){
                            v[nr][nc]=true;
                            st.push({nr,nc});
                        }
                    }
                }
                ma=max(ma,ca);
            }
        }
    }

    cout<<"Case #"<<cs<<": "<<ma<<lb;
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