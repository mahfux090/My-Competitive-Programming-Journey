#include <stdio.h>
#include <limits.h>  // For INT_MAX

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int minSum = INT_MAX;

        // Check all pairs i < j
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int sum = A[i] + A[j] + (j - i);
                if (sum < minSum) {
                    minSum = sum;
                }
            }
        }

        printf("%d\n", minSum);
    }

    return 0;
}
