#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int mx = a[0], mi = a[0], ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx) mx = a[i], ct++;
        else if (a[i] < mi) mi = a[i], ct++;
    }
    cout << ct;
    return 0;
}