#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n;
        int freq[101] = {0};
        for(int i=0;i<n;i++)
        {
            cin >> x;
            freq[x]++;
        }
        bool ok = true;
        for(int i=1;i<=100;i++)
        {
            if(freq[i]%2 != 0)
            {
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
