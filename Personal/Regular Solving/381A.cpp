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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int s = 0, d = 0, l = 0, r = n - 1, turn = 0;
    while (l <= r)
    {
        if (a[l] > a[r])
        {
            if (turn % 2 == 0)
                s += a[l];
            else
                d += a[l];
            l++;
        }
        else
        {
            if (turn % 2 == 0)
                s += a[r];
            else
                d += a[r];
            r--;
        }
        turn++;
    }
    cout << s << " " << d;
}

int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//