#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string vowels = "aoyeuiAOYEUI";
    string ans;
    for (char c : s) {
        if (vowels.find(c) == string::npos) {
            ans += '.';
            ans += tolower(c);
        }
    }
    cout << ans << "\n";
    return 0;
}
