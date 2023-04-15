#include<stdio.h>

int main() {

    // Copy Elements of Two Arrays

    /**
      Input
         5;               // Array size
         10 20 30 40 50   // Array element

      Output
         50 40 30 20 10
    **/

    int n1, n2;

    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int len = n1 + n2;
    int arr3[len];

    int i = 0, k = 0;
    while (i < len) {
        if (i < n1) {
            arr3[i]= arr1[i];
        }
        else {
            arr3[i]= arr2[k];
            k++;
        }
        i++;
    }

    for (int i = 0; i < len; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}

