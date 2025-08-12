#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    stack<char> st;
    st.push(s.front());
    for (char c : s)
        if (c != st.top())
            st.push(c);
    cout << n - st.size();
}