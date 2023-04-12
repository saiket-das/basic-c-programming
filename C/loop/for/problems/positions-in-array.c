#include<stdio.h>

int main () {

    // Positions in array
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] <= 10) {
            printf("A[%d] = %d\n",i , arr[i]);
        }
    }

    return 0;
}