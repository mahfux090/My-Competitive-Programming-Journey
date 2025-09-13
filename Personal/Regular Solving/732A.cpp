#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++)
    {
        int x = k * i;
        if (x % 10 == 0 || x % 10 == r)
        {
            cout << i;
            return 0;
        }
    }
}