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
    vector<string> g(n);
    for(int i=0;i<n;i++){
        cin>>g[i];
    }

    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};

    auto ok=[&](int r, int c){
        return r>=0&&r<n&&c>=0&&c<n;
    };

    auto check3=[&](){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-2;j++){
                if(g[i][j]=='#'&&g[i][j+1]=='#'&&g[i][j+2]=='#') return true;
            }
        }
        for(int j=0;j<n;j++){
            for(int i=0;i<n-2;i++){
                if(g[i][j]=='#'&&g[i+1][j]=='#'&&g[i+2][j]=='#') return true;
            }
        }
        return false;
    };

    if(check3()){
        cout<<"NO"<<lb;
        return;
    }

    vector<vector<pii>> all_c;
    vector<vector<int>> cid(n,vector<int>(n,-1));
    vector<vector<bool>> v(n,vector<bool>(n,false));
    int c_idx=0;

    function<void(int,int,int,vector<pii>&)> find_comp;
    find_comp=[&](int r, int c, int c_id, vector<pii>& cur_c){
        if(!ok(r,c)||v[r][c]||g[r][c]=='.') return;
        v[r][c]=true;
        cid[r][c]=c_id;
        cur_c.pb({r,c});
        for(int i=0;i<4;i++){
            find_comp(r+dx[i],c+dy[i],c_id,cur_c);
        }
    };

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(g[i][j]=='#'&&!v[i][j]){
                vector<pii> cur_c;
                find_comp(i,j,c_idx,cur_c);
                all_c.pb(cur_c);
                c_idx++;
            }
        }
    }

    int k=sz(all_c);
    if(k<=1){
        cout<<"YES"<<lb;
        return;
    }

    struct stt {
        int x, y, dir;
    };

    auto safe=[&](int r, int c, const vector<vector<bool>>& blk){
        for(int k=max(0,c-2);k<=c;k++){
            if(k+2>=n)continue;
            bool p=(k==c?true:blk[r][k]);
            bool q=(k+1==c?true:blk[r][k+1]);
            bool rr=(k+2==c?true:blk[r][k+2]);
            if(p&&q&&rr) return false;
        }
        for(int k=max(0,r-2);k<=r;k++){
            if(k+2>=n) continue;
            bool p=(k==r?true:blk[k][c]);
            bool q=(k+1==r?true:blk[k+1][c]);
            bool rr=(k+2==r?true:blk[k+2][c]);
            if(p&&q&&rr) return false;
        }
        return true;
    };

    auto is_goal=[&](int r, int c, const vector<bool>& mrg){
        for(int i=0;i<4;i++){
            int nr=r+dx[i],nc=c+dy[i];
            if(ok(nr,nc)&&g[nr][nc]=='#'&&!mrg[cid[nr][nc]]){
                return true;
            }
        }
        return false;
    };

    auto solve_comp=[&](int rt){
        vector<bool> mrg(k,false);
        mrg[rt]=true;
        int mrg_cnt=1;
        vector<vector<bool>> gr(n,vector<bool>(n,false));
        for(auto p:all_c[rt]) gr[p.ff][p.ss]=true;

        vector<vector<bool>> blk(n,vector<bool>(n,false));
        for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(g[i][j]=='#') blk[i][j]=true;

        bool pos=true;
        while(mrg_cnt<k&&pos){
            vector<vector<vector<bool>>> vst(n,vector<vector<bool>>(n,vector<bool>(4,false)));
            vector<vector<vector<stt>>> prev(n,vector<vector<stt>>(n,vector<stt>(4,{-1,-1,-1})));
            queue<stt> q;

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(!gr[i][j]) continue;
                    for(int d=0;d<4;d++){
                        int nr=i+dx[d],nc=j+dy[d];
                        if(!ok(nr,nc)||g[nr][nc]!='.'||blk[nr][nc]||!safe(nr,nc,blk)) continue;
                        if(vst[nr][nc][d]) continue;
                        vst[nr][nc][d]=true;
                        q.push({nr,nc,d});
                    }
                }
            }

            bool found_pth=false;
            while(!q.empty()&&!found_pth){
                stt cur=q.front();q.pop();
                int cx=cur.x,cy=cur.y,cdir=cur.dir;

                if(is_goal(cx,cy,mrg)){
                    vector<pii> pth;
                    stt tmp=cur;
                    while(true){
                        pth.pb({tmp.x,tmp.y});
                        stt p=prev[tmp.x][tmp.y][tmp.dir];
                        if(p.x==-1) break;
                        tmp={p.x,p.y,p.dir};
                    }
                    reverse(all(pth));

                    vector<vector<bool>> tmp_blk=blk;
                    bool okpath=true;
                    for(auto [pr,pc]:pth){
                        if(!safe(pr,pc,tmp_blk)){
                            okpath=false;
                            break;
                        }
                        tmp_blk[pr][pc]=true;
                    }

                    if(okpath){
                        blk=tmp_blk;
                        for(auto p:pth) gr[p.ff][p.ss]=true;
                        set<int> new_ids;
                        for(auto [px,py]:pth){
                            for(int d2=0;d2<4;d2++){
                                int nx=px+dx[d2],ny=py+dy[d2];
                                if(ok(nx,ny)&&g[nx][ny]=='#'&&!mrg[cid[nx][ny]]){
                                    new_ids.insert(cid[nx][ny]);
                                }
                            }
                        }
                        for(int id:new_ids){
                            mrg[id]=true;
                            mrg_cnt++;
                            for(auto p:all_c[id]) gr[p.ff][p.ss]=true;
                        }
                        found_pth=true;
                        continue;
                    } else {
                        continue;
                    }
                }

                for(int ndir=0;ndir<4;ndir++){
                    int nx=cx+dx[ndir],ny=cy+dy[ndir];
                    if(!ok(nx,ny)||g[nx][ny]!='.'||blk[nx][ny]||ndir==cdir||!safe(nx,ny,blk)) continue;

                    bool is_h=(nx==cx);
                    bool is_bad=false;
                    if(is_h){
                        int lc=min(cy,ny)-1,rc=max(cy,ny)+1;
                        if(ok(cx,lc)&&blk[cx][lc]) is_bad=true;
                        if(ok(cx,rc)&&blk[cx][rc]) is_bad=true;
                    } else {
                        int ur=min(cx,nx)-1,dr=max(cx,nx)+1;
                        if(ok(ur,cy)&&blk[ur][cy]) is_bad=true;
                        if(ok(dr,cy)&&blk[dr][cy]) is_bad=true;
                    }
                    if(is_bad) continue;

                    if(vst[nx][ny][ndir]) continue;
                    vst[nx][ny][ndir]=true;
                    q.push({nx,ny,ndir});
                    prev[nx][ny][ndir]={cx,cy,cdir};
                }
            }
            if(!found_pth) pos=false;
        }
        return pos&&mrg_cnt==k;
    };

    bool ans=false;
    for(int rt=0;rt<k;rt++){
        if(solve_comp(rt)){
            ans=true;
            break;
        }
    }
    
    if(ans) cout<<"YES"<<lb;
    else cout<<"NO"<<lb;
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