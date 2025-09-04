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
        long long a, b, c;
        cin >> a >> b >> c;
        long long sum = a + b + c;
        if (sum % 3 != 0)
        {
            cout << "NO\n";
            continue;
        }
        long long x = sum / 3;
        if (x >= b && x <= c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
