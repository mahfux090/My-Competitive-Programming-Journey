#include<bits/stdc++.h>
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
    int N, K;
    cin >> N >> K;
    string S, T;
    cin >> S >> T;
    vector<int> src(N, -1);
    vector<int> LST(26, -1);

    for (int i = 0; i < N; ++i)
    {
        LST[S[i] - 'a'] = i + 1;
        char c = T[i];
        int need = c - 'a';
        if (LST[need] != -1)
            src[i] = LST[need];
        else
            src[i] = -1;
    }

    bool ok = true;
    for (int i = 0; i < N; ++i)
        if (src[i] == -1)
            ok = false;
    if (!ok)
    {
        cout << "-1" << lb;
        return;
    }

    int k = 0;
    for (int i = 0; i < N; ++i)
        k = max(k, i + 1 - src[i]);
    if (k > K)
    {
        cout << "-1" << lb;
        return;
    }

    cout << k << lb;
    string cur = S;
    for (int s = 0; s < k; ++s)
    {
        vector<int> MN(N + 2, INT_MAX);
        for (int i = N - 1; i >= 0; --i)
            MN[i + 1] = min(MN[i + 2], src[i]);
        string nxt = cur;
        nxt[0] = cur[0];
        for (int i = 2; i <= N; ++i)
        {
            if (MN[i] < i)
                nxt[i - 1] = cur[i - 2];
            else
                nxt[i - 1] = cur[i - 1];
        }
        cout << nxt << lb;
        cur.swap(nxt);
    }
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