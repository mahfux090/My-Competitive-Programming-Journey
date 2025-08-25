#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < s.size();)
    {
        if (s.substr(i, 3) == "WUB")
            i += 3;
        else
        {
            t = "";
            while (i < s.size() && s.substr(i, 3) != "WUB")
                t += s[i++];
            v.push_back(t);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i)
            cout << " ";
        cout << v[i];
    }
    cout << endl;
}
