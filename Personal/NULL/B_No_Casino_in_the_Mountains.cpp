#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        vector<int> prefix(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }

        int hikes = 0;
        int i = 1;
        while (i <= n - k + 1)
        {

            if (prefix[i + k - 1] - prefix[i - 1] == 0)
            {
                hikes++;
                i += k + 1;
            }
            else
            {
                i++;
            }
        }

        cout << hikes << '\n';
    }

    return 0;
}