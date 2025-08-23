#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        long long mini = min(x, y);
        cout << (n + mini - 1) / mini << endl;
    }
    return 0;
}
