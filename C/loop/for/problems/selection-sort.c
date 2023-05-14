#include<stdio.h>

int main () {

    // Sum of Two Values Equal X

    /*
       Unsorted                   [20, 40, 10, 30]
       Sorted Ascending order     [10, 20, 30, 40]
       Sorted Descending order    [40, 30, 20, 10]
    */

    int n;

    // Array length input
    scanf("%d", &n);

    int arr[n];
    // Array element input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorted Ascending order => [2, 7, 5, 10, 3] -> [2, 3, 5, 7, 10]
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n ; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Sorted Descending order => [2, 7, 5, 10, 3] -> [10, 7, 5, 3, 2]
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n ; j++) {
            if (arr[i] < arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

