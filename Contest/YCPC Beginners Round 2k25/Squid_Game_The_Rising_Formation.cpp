#include<bits/stdc++.h>
using namespace std;

const int N = 200005;
long long a[N];
int b[N];
long long ls[N],rg[N];
long long bit[N];
int n;
void upd(int idx,int val,int mx_val)
{
    for (;idx<=mx_val;idx+= idx & -idx)
    {
        bit[idx] += val;
    }
}
long long qry(int idx)
{
    long long s = 0;
    for (; idx > 0; idx -= idx & -idx)
    {
        s += bit[idx];
    }
    return s;
}

void solve()
{
    scanf("%d", &n);
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        v.push_back(a[i]);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int m = v.size();
    for (int i = 0; i < n; i++)
    {
        b[i] = lower_bound(v.begin(), v.end(), a[i]) - v.begin() + 1;
    }

    for (int i = 0; i <= m; ++i) bit[i] = 0;
    for (int i = 0; i < n; i++)
    {
        ls[i] = qry(b[i] - 1);
        upd(b[i], 1, m);
    }

    for (int i = 0; i <= m; ++i) bit[i] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        rg[i] = qry(m) - qry(b[i]);
        upd(b[i], 1, m);
    }

    long long ans = 0;
    for (int i = 0; i<n; i++) 
    {
        ans += ls[i]*rg[i];
    }
    printf("%lld\n",ans);
}
int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}
