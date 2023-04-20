#include<stdio.h>

int main () {

    // Mirror Array
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        int arr[m];

        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[j]);
        }

        for (int j = 0, k = m -1 ; j < k; j++, k--) {
            int temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
        }

        for (int j = 0; j < m; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}