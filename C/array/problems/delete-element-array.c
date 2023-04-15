#include<stdio.h>

int main() {

    // Remove Element from an Array

    /**
      Input
         5;               // Array size
         10 20 30 40 50   // Array element
         2                // Remove element position

      Output
         10 20 40 50
    **/

    int n, p;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &p);

    for (int i = p; i < n-1; i++) {
        arr[i] = arr[i+1];
    }

    for (int i = 0; i < n-1; i++) {
        printf("%d ", arr[i])      ;
    }

    return 0;
}

