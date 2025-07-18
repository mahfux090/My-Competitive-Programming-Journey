#include <iostream>

#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector < int > A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        bool scholarship = true;
        long long sum = 0;
        for (int i = 0; i < N; i++) {
            sum += A[i];
            double avg = (double) sum / (i + 1);
            if (avg < 40.0) {
                scholarship = false;
                break;
            }
        }
        cout << (scholarship ? "Yes" : "No") << endl;
    }

    return 0;
}