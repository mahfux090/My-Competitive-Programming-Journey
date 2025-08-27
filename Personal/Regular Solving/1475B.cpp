#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = n / 2020;
        int r = n % 2020;
        if (r <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
