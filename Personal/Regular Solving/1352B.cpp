#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int k;
        cin >> n >> k;
        if (n >= k && (n - k) % 2 == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++)
                cout << 1 << " ";
            cout << n - (k - 1) << "\n";
        }
        else if (n >= 2LL * k && (n - 2LL * (k - 1)) > 0)
        {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++)
                cout << 2 << " ";
            cout << n - 2LL * (k - 1) << "\n";
        }
        else
            cout << "NO\n";
    }
}
