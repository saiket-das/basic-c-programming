#include<stdio.h>

// Docs link; https://docs.google.com/document/d/1ggJfhlXCb6yBOPaXY74GP9X-dMcaQbuRaAraZXcOB5c/edit

void array_max_element (int len, int arr[]) {

    int max = arr[0];

    for (int i = 1; i < len; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    printf("%d", max);
}


int main () {

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    array_max_element(n, arr);

    return 0;
}

