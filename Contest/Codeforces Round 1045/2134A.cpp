#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        if ((n - b) % 2)
        {
            cout << "NO\n";
            continue;
        }
        if (a <= b)
        {
            cout << "YES\n";
            continue;
        }
        cout << (((a - b) % 2 == 0) ? "YES\n" : "NO\n");
    }
    return 0;
}
