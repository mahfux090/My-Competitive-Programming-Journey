#include <bits/stdc++.h>
using namespace std;

bool canReach(long long current, long long n)
{
    if (current == n)
        return true;
    if (current > n)
        return false;
    return canReach(current * 10, n) || canReach(current * 20, n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (canReach(1, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
