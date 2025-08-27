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
        for (long long k = 2; k <= 30; k++)
        {
            if (n % ((1LL << k) - 1) == 0)
            {
                cout << n / ((1LL << k) - 1) << "\n";
                break;
            }
        }
    }
}
