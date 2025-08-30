#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            ones++;
        a[i] = (a[i] == 0 ? 1 : -1);
    }
    int cur = 0, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cur = max(a[i], cur + a[i]);
        mx = max(mx, cur);
    }
    if (mx <= 0)
        cout << ones - 1;
    else
        cout << ones + mx;
}
