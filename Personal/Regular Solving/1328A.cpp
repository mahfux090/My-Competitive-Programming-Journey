#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, ct = 0;
        cin >> a >> b;
        while (true)
        {
            if (a % b == 0)
                break;
            a+=1;
            ct++;
        }
        cout << ct<<endl;
    }
    return 0;
}