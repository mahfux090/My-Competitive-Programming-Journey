#include<bits/stdc++.h>
using namespace std;

struct ed {
    int a, b, w, idx;
};

vector<int> p;

int find_p(int v) {
    if (v == p[v])
        return v;
    return p[v] = find_p(p[v]);
}

bool unite_p(int a, int b) {
    a = find_p(a);
    b = find_p(b);
    if (a != b) {
        p[b] = a;
        return true;
    }
    return false;
}

bool cmp(const ed& x, const ed& y) {
    return x.w > y.w;
}

void slv() {
    int n;
    cin >> n;
    vector<ed> v(n);
    int max_n = 0;
    for(int i=0; i<n; i++){
        cin >> v[i].a >> v[i].b;
        v[i].w = v[i].b - v[i].a;
        v[i].idx = i+1;
        max_n = max({max_n, v[i].a, v[i].b});
    }

    sort(v.begin(), v.end(), cmp);

    p.assign(max_n + 1, 0);
    for(int i = 0; i <= max_n; i++) p[i] = i;

    vector<int> res;
    for(auto& e: v){
        if(unite_p(e.a, e.b)){
            res.push_back(e.idx);
        }
    }
    
    cout << res.size() << "\n";
    for(int i=0; i < (int)res.size(); i++){
        cout << res[i] << (i+1 < (int)res.size() ? ' ' : '\n');
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) slv();
}
// Solved By Mahfuz Uddin