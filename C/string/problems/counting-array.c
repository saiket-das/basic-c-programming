#include<stdio.h>
#include<string.h>

int main () {

    // Counting array

    int n;
    scanf("%d", &n);

    int arr[n], count_arr[10] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int k = arr[i];
        count_arr[k]++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d = %d\n", i, count_arr[i]);
    }

    return 0;
}
