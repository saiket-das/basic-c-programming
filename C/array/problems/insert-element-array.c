#include<stdio.h>

int main() {

    // Insert Element in an Array

    /**
      Input
         5;               // Array size
         10 20 30 40 50   // Array element
         2                // Insert element position
         100              // Insert element value

      Output
         10 20 100 30 40 50
    **/

    int n, p, v;
    scanf("%d", &n);

    int arr[n+1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &p);
    scanf("%d", &v);

    for (int i = n; i > p; i--) {
        arr[i] = arr[i-1];
    }
    arr[p] = v;

    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
