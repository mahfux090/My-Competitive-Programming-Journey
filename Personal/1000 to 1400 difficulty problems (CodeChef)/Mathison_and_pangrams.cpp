#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int cost[26];
        for(int i = 0; i < 26; i++) cin >> cost[i];
        string s;
        cin >> s;
        bool present[26] = {0};
        for(char c : s) present[c - 'a'] = 1;
        int sum = 0;
        for(int i = 0; i < 26; i++)
            if(!present[i]) sum += cost[i];
        cout << sum << endl;
    }
    return 0;
}
