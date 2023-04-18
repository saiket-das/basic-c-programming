#include<stdio.h>
#include<limits.h>

int main () {

    // Replace MinMax
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

    int n;
    scanf("%d", &n);

    int arr[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN, min = INT_MAX;
    int min_index = 0, max_index = 0;


    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }

        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }

    arr[min_index] = max;
    arr[max_index] = min;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}