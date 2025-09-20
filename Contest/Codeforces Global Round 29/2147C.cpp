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
    string s;
    cin >> s;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
            continue;

        int p = i + 1;
        bool sl = false;
        if (p == 1)
            sl = true;
        else if (s[p - 2] == '0')
            sl = true;
        else if (p > 2 && s[p - 3] == '0')
            sl = true;

        bool sr = false;
        if (p == n)
            sr = true;
        else if (s[p] == '0')
            sr = true;
        else if (p < n - 1 && s[p + 1] == '0')
            sr = true;

        if (!sl && !sr)
        {
            cout << "NO" << lb;
            return;
        }
    }

    cout << "YES" << lb;
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