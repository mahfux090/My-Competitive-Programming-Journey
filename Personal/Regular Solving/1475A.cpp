#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if ((n & -n) == n)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
