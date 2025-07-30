#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin >> s;

    set<char> st;
    for (char c : s) {
        st.insert(c);
    }
    int tot = st.size();

    int l = 0;
    int ans = n;
    map<char, int> mp;
    int cur = 0;

    for (int r=0; r < n; r++) {
        mp[s[r]]++;
        if (mp[s[r]] == 1) {
            cur++;
        }

        while (cur == tot) {
            ans = min(ans, r - l + 1);
            mp[s[l]]--;
            if (mp[s[l]] == 0) {
                cur--;
            }
            l++;
        }
    }

    cout << ans << endl;

    // Solved By Mahfuz Uddin
}