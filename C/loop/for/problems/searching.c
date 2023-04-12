#include<stdio.h>

int main () {

    // Searching
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B


    int n, x;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    int num = -1;
    for (int j = 0; j < n; j++) {
        if (x == arr[j]){
            num = j;
            break;
        }
    }

    if (num < 0) {
        printf("%d", num);
    }
    else {
        printf("%d", num);
    }

    return 0;
}
