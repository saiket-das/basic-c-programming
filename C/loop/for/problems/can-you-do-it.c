#include<stdio.h>

int main () {

    // Can You Do It?
    // Problem link: https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/can-you-do-it-2-2

    int n;
    scanf("%d", &n);

    if (n <= 0) {
        for (int i = n; i <= 1; i++) {
            printf("%d ", i);
        }
    }
    else {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    }

    return 0;
}