// https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

class Solution {
  public:
  vector<int> dis;
  void dijkstra_algo(int src, vector<vector<pair<int,int>>> &adj)
  {
      priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
      dis[src]=0;
      pq.push({0,src});
      while(!pq.empty())
      {
          int par_dis=pq.top().first;
          int par_node=pq.top().second;
          pq.pop();
          if(par_dis>dis[par_node]) continue;
          for(auto child: adj[par_node])
          {
              int child_node=child.first;
              int child_dis=child.second;
              if(par_dis+child_dis<dis[child_node])
              {
                  dis[child_node]=par_dis+child_dis;
                  pq.push({dis[child_node],child_node});
              }
          }
      }
  }

  vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
      vector<vector<pair<int,int>>> adj(V);
      for(auto e: edges)
      {
          int u=e[0], v=e[1], w=e[2];
          adj[u].push_back({v,w});
          adj[v].push_back({u,w}); 
      }
      dis.assign(V,1e9);
      dijkstra_algo(src,adj);
      return dis;
  }
};
