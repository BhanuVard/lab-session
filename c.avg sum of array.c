#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double avg = (double)sum / n;

    printf("The sum of the array is: %d\n", sum);
    printf("The average of the array is: %lf\n", avg);

    return 0;
}

