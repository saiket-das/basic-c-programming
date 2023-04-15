#include<stdio.h>

int main() {

    // Reverse an Array

    /**
      Input
         5;               // Array size
         10 20 30 40 50   // Array element

      Output
         50 40 30 20 10
    **/

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int i = 0, k = n-1;
    while (i < k) {    // Two pointer technic
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
        i++;
        k--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i])      ;
    }

    return 0;
}
