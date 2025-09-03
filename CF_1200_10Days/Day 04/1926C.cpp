#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int, int>
#define pll pair<ll, ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
const int MAXN = 200005;

ll p[MAXN];

int s(int n)
{
    int sm = 0;
    string str = to_string(n);
    for (char c : str)
    {
        sm += (c - '0');
    }
    return sm;
}

void precompute()
{
    p[0] = 0;
    for (int i = 1; i < MAXN; i++)
    {
        p[i] = p[i - 1] + s(i);
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << p[n] << lb;
}

int main()
{
    fast
    precompute();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//