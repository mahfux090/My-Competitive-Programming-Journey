#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> zrs;
    for (int i = 0; i < n; ++i)
        if (s[i] == '0')
            zrs.pb(i);

    if (zrs.empty())
    {
        cout << "YES" << lb;
        return;
    }

    vector<char> cL(n, 0), cR(n, 0);
    for (int i : zrs)
    {
        cL[i] = (i == 0) || (s[i - 1] == '0') || (i >= 2 && s[i - 1] == '1' && s[i - 2] == '0');
        cR[i] = (i == n - 1) || (i + 1 < n && s[i + 1] == '0') || (i + 2 < n && s[i + 1] == '1' && s[i + 2] == '0');
    }

    int m = sz(zrs);
    int p_idx = 0;
    while (p_idx < m)
    {
        int j = p_idx;
        while (j + 1 < m && zrs[j + 1] == zrs[j] + 2 && s[zrs[j] + 1] == '1')
            ++j;

        int first_rabbit = zrs[p_idx];
        int cur_state = (cL[first_rabbit] ? 1 : 0) | (cR[first_rabbit] ? 2 : 0);

        if (!cur_state)
        {
            cout << "NO" << lb;
            return;
        }

        for (int k = p_idx + 1; k <= j; ++k)
        {
            int current_rabbit = zrs[k];
            int next_state = 0;
            if ((cur_state & 1) && cR[current_rabbit])
                next_state |= 2;
            if ((cur_state & 2) && cL[current_rabbit])
                next_state |= 1;
            cur_state = next_state;
            if (!cur_state)
            {
                cout << "NO" << lb;
                return;
            }
        }
        p_idx = j + 1;
    }

    cout << "YES" << lb;
}

int main() {
    fast
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//