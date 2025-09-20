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
    vector<int> a(2 * n + 1, 0);
    int p = 1;
    for (int i = n; i >= 1; --i)
    {
        while (a[p] != 0)
        {
            p++;
        }

        int d = i;
        while (true)
        {
            if (p + d <= 2 * n && a[p + d] == 0)
            {
                a[p] = i;
                a[p + d] = i;
                break;
            }
            d += i;
        }
    }

    for (int i = 1; i <= 2 * n; i++)
    {
        cout << a[i] << " ";
    }
    cout << lb;
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