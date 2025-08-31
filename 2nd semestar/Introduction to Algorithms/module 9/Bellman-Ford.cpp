#include <bits/stdc++.h>
using namespace std;
class Edges
{
public:
    int a, b, c;
    Edges(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int dis[1005];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edges> edg;
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edg.push_back(Edges(a, b, c));
    }
    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;
    dis[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edg)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << "->" << dis[i] << endl;
    }

    return 0;
}