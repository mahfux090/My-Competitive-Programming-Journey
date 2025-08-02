#include<bits/stdc++.h>

using namespace std;

void sl() {
    string s;
    cin >> s;
    int n = s.length();
    int mx = 0;

    for (int i=0; i<10; ++i) {
        for (int j=0; j<10; ++j) {
            int cnt = 0;
            char tg1 = i + '0';
            char tg2 = j + '0';
            char cur_tg = tg1;
            
            for (char c : s) {
                if (c == cur_tg) {
                    cnt++;
                    if(cur_tg == tg1) {
                        cur_tg=tg2;
                    } else {
                        cur_tg = tg1;
                    }
                }
            }
            
            if (tg1 != tg2) {
                if(cnt % 2 != 0) {
                    cnt--;
                }
            }
            mx = max(mx, cnt);
        }
    }
    cout << n-mx << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        sl();
    }
    return 0;
}

// Solved By Mahfuz Uddin