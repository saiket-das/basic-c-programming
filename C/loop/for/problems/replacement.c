#include<stdio.h>

int main () {

    // Replacement
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", 2);
        }
        else if (arr[i] == 0) {
            printf("%d ", arr[i]);
        }
        else {
            printf("%d ", 1);
            }
    }

    return 0;
}
