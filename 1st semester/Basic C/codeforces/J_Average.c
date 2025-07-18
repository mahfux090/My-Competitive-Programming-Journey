#include <stdio.h>

double getAverage(double arr[], int n) {
    double sum = 0.0; // initialize sum to 0.0 (not garbage)
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    int n;
    scanf("%d", &n);

    double a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]); // Read double values correctly
    }

    double avg = getAverage(a, n);
    printf("%.7lf\n", avg); // 7 digits after decimal point
    return 0;
}
