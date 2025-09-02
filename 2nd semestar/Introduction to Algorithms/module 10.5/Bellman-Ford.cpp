// https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1
// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<int> dist(V,1e9);
        dist[src]=0;
        for(int i=0;i<V-1;i++){
            for(auto e:edges){
                int u=e[0],v=e[1],w=e[2];
                if(dist[u]!=1e9 && dist[u]+w<dist[v]){
                    dist[v]=dist[u]+w;
                }
            }
        }
        for(auto e:edges){
            int u=e[0],v=e[1],w=e[2];
            if(dist[u]!=1e9 && dist[u]+w<dist[v]){
                return {-1};
            }
        }
        for(int i=0;i<V;i++){
            if(dist[i]==1e9) dist[i]=1e8;
        }
        return dist;
    }
};
