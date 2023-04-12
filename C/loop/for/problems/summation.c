#include<stdio.h>

int main () {

    // Summation
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

    int n;
    scanf("%d", &n);

    int arr[n];
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    if (sum < 0) {
        sum = -sum;
    }
    printf("%lld\n", sum);

    return 0;
}