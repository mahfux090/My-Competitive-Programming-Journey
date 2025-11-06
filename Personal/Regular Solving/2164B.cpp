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
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> v;
    for (int i = 0; i < n; ++i)
        if (a[i] % 2 == 0)
            v.push_back(i);
    char f = 'F';
    if ((int)v.size() >= 2)
    {
        cout << a[v[0]] << " " << a[v[1]] << lb;
        return;
    }
    for (int i = 0; i < n && f == 'F'; ++i)
    {
        short s = min(n, i + 101);
        for (int j = i + 1; j < s; ++j)
        {
            if ((a[j] % a[i]) % 2 == 0)
            {
                cout << a[i] << " " << a[j] << lb;
                f = 'T';
                break;
            }
        }
    }
    if (f == 'F')
        cout << "-1" << lb;
}
int main()
{
    fast int t = 1;
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