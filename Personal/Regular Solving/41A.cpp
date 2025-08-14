#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    stack<char> st;
    queue<char> q;
    for (char x : a)
        st.push(x);
    for (char y : b)
        q.push(y);
    int flag = 0;
    while (!st.empty()) {
        if (st.top() == q.front()) {
            st.pop();
            q.pop();
        }
        else {
            flag = 1;
            break;
        }
    }
    if(st.size()!=q.size()) flag=1;
    flag == 0 ? cout << "YES" : cout << "NO";
    return 0;
}