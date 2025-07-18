#include <iostream>

#include <set>

#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector < int > A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        set < int > unique_types;
        for (int i = 0; i < N; i++) {
            unique_types.insert(A[i]);
        }

        int uncollected = M - unique_types.size();

        cout << uncollected << endl;
    }

    return 0;
}