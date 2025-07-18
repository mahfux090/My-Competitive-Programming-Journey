#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        ll k;
        cin >> n >> k;

        vector<array<ll,3>> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i][0] >> a[i][1] >> a[i][2];

        sort(a.begin(), a.end());

        vector<ll> heap;
        int i = 0;
        ll coins = k;

        while(i < n || !heap.empty()){
            while(i < n && a[i][0] <= coins){
                if (a[i][1] >= coins)
                    heap.push_back(a[i][2]),
                    push_heap(heap.begin(), heap.end());
                ++i;
            }
            if(heap.empty()) break;

            pop_heap(heap.begin(), heap.end());
            ll best = heap.back(); heap.pop_back();

            if (best <= coins) continue;
            coins = best;
        }

        cout << coins << '\n';
    }
}
