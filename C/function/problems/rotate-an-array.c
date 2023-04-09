#include<stdio.h>


void rotateArray (int len, int arr[]) {

    int first = arr[0];
    for (int i = 0; i < len-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[len-1] = first;

}


void rotateArrayByK (int len, int k, int arr[]) {

    for (int i = 0; i < k; i++) {
        rotateArray(len, arr);
    }

}


int main () {

    // Function for rotating an Array

    /**
      arr[] -> {1, 2, 3, 4}
      Rotate(arr);
      arr[] -> {2, 3, 4, 1}
    **/

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    if (k % n == 0) k = n;
    else            k = k % n;

    // rotateArray(n, arr);
    rotateArrayByK(n, k, arr);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

