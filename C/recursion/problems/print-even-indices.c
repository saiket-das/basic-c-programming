#include<stdio.h>

void fun (int arr[], int i, int len) {

    if (i > len) return;     // Base case
    
    if (len % 2 == 0) {
        printf("%d ", arr[len]);     // Print even index's element
    }

    fun (arr, i, len - 1);     // Recursion
}

int main () {

    // Print Even Indices
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    fun(arr, 0, n - 1);

    return 0;
}