#include<stdio.h>

int main () {

    // Reverse and Even
    // Problem link: https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/reverse-and-even

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}