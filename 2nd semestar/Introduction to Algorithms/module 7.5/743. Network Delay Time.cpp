class Solution {
public:
    vector<pair<int, int>> v[105];
    int dis[105];
    class cmp {
    public:
        bool operator()(pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        }
    };
    void dij(int n, int src) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        dis[src] = 0;
        pq.push({src, 0});
        while (!pq.empty()) {
            int node = pq.top().first;
            int time = pq.top().second;
            pq.pop();
            for (auto child : v[node]) {
                int childNode = child.first;
                int childCost = child.second;
                if (time + childCost < dis[childNode]) {
                    dis[childNode] = time + childCost;
                    pq.push({childNode, dis[childNode]});
                }
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for (auto x : times)
            v[x[0]].push_back({x[1], x[2]});
        for (int i = 1; i <= n; i++) {
            dis[i] = 1e9;
        }
        dij(n, k);
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (dis[i] == 1e9)
                return -1;
            ans = max(dis[i], ans);
        }
        return ans;
    }
};