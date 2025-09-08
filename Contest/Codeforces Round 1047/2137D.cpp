#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
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
    vector<int> b(n);
    vector<int> counts(n + 1, 0);
    vector<vector<int>> groups(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        counts[b[i]]++;
        groups[b[i]].pb(i);
    }

    for (int k = 1; k <= n; k++)
    {
        if (counts[k] > 0)
        {
            if (counts[k] % k != 0)
            {
                cout << -1 << lb;
                return;
            }
        }
    }

    vector<int> a(n);
    int val_counter = 1;

    for (int k = 1; k <= n; k++)
    {
        if (counts[k] > 0)
        {
            for (int i = 0; i < groups[k].size(); i++)
            {
                if (i % k == 0)
                {
                    val_counter++;
                }
                a[groups[k][i]] = val_counter - 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
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