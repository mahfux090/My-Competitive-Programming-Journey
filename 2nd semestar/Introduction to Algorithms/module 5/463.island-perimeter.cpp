// 463. Island Perimeter
class Solution {
public:
int vis[105][105];
int n,m,ct=0;
vector<pair<int,int>>d={{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int i, int j)
{
    if(i<0||j<0||i>=n|| j>=m)
        return false;
    return true;
}
void dfs(int si,int sj,vector<vector<int>>& grid)
{
    vis[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(valid(ci,cj)==false)
            ct++;
        else if(valid(ci,cj)==true && grid[ci][cj]==0)
            ct++;
        else if(valid(ci,cj)==true && !vis[ci][cj] && grid[ci][cj]==1){
            dfs(ci,cj,grid);
        }
    }
}
    int islandPerimeter(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        memset(vis,false,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                    dfs(i,j,grid);
            }
        }
         return ct;
    }
};