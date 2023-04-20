#include<stdio.h>

int main () {

    // Find It
    // Problem link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/find-it-2-5
    
    int n, x, count = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if(arr[i] == x) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}