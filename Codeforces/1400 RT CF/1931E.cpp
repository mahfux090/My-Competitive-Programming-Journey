#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

void solve() {
    int n;
    long long m;
    cin >> n >> m;
    
    vector<int> zeros;
    long long total_len = 0;
    
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        
        total_len += s.length();
        
        int cnt = 0;
       for (int j = s.length() - 1; j >= 0; --j) {
            if (s[j] == '0') {
                cnt++;
            } else {
                break;
            }
        }
        zeros.push_back(cnt);
    }
    
    sort(zeros.begin(), zeros.end(), greater<int>());
    
    long long removed_zeros = 0;
    for (int i = 0; i < n; i += 2) {
        removed_zeros += zeros[i];
    }
    
    long long final_len = total_len - removed_zeros;
    
    if (final_len >= m + 1) {
        cout << "Sasha" << endl;
    } else {
        cout << "Anna" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}