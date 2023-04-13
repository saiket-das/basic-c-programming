#include<stdio.h>

int main () {

    // Update and Print
    // Problem link: https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/update-and-print

    int n, x, v;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &x, &v);

    arr[x] = v;

    // printf("%d\n", arr[x]);

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
