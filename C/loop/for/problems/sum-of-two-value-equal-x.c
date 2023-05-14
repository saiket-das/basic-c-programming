#include<stdio.h>

int main () {

    // Sum of Two Values Equal X

    /*
       5            // Array length
       2 7 5 10 3   // Array elements
       8            // Sum of two element's vale equal Target value
    */

    int n, target;

    // Array length input
    scanf("%d", &n);

    int arr[n];
    // Array element input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Target value input
    scanf("%d", &target);

    // 1st solution

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 1; j < n; j++) {
            sum = arr[i] + arr[j];
            if (sum == target) {
                printf("%d + %d = %d", arr[i], arr[j], target);
                return;
            }
        }
    }

    // 2nd solution

    // Sorting the array fist   [2, 7, 5, 10, 3] -> [2, 3, 5, 7, 10]
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n ; j++) {
            if (arr[j] < arr[i]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    // Comparing sum of two element's value with target value
    int i = 0, j = n - 1;
    while ( i < j) {
        int sum = arr[i] + arr[j];

        if (sum == target) {
            printf("%d + %d = %d", arr[i], arr[j], target);
            return;
        }
        if (sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    return 0;
}
