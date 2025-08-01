#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a = max(x, z);
        int b = max(x, y);
        int c = max(y, z);

        if(min(a, b) == x && min(b, c) == y && min(c, a) == z)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
