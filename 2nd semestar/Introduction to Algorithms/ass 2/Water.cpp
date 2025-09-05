#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int left = 0, right = n - 1;
        int mxh = 0;
        int lidx = 0, ridx = n - 1;

        while (left < right)
        {
            int h = min(a[left], a[right]);
            if (h > mxh)
            {
                mxh = h;
                lidx = left;
                ridx = right;
            }
            if (a[left] < a[right])
                left++;
            else
                right--;
        }
        cout << lidx << " " << ridx << endl;
    }
    return 0;
}
