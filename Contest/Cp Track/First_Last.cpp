#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    int i = 0;
    while (i < n)
    {
        int val = a[i].first;
        int first_idx = a[i].second;
        int last_idx = a[i].second;
        int j = i;
        while (j < n && a[j].first == val)
        {
            j++;
        }
        last_idx = a[j - 1].second;
        cout << val << " " << first_idx << " " << last_idx << endl;
        i = j;
    }
}