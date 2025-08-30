#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int cnt[4] = {0, 0, 0, 0};
        int l = 0, ans = n + 1;
        for (int r = 0; r < n; r++)
        {
            cnt[s[r] - '0']++;
            while (cnt[1] && cnt[2] && cnt[3])
            {
                ans = min(ans, r - l + 1);
                cnt[s[l] - '0']--;
                l++;
            }
        }
        if (ans == n + 1)
            cout << 0 << "\n";
        else
            cout << ans << "\n";
    }
}
