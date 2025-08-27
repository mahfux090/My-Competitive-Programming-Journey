#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char dir;
    cin >> dir >> s;
    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans = "";
    for (char c : s)
    {
        size_t pos = kb.find(c);
        if (dir == 'R')
            ans += kb[pos - 1];
        else
            ans += kb[pos + 1];
    }
    cout << ans;
}
