#include<stdio.h>

// Docs link; https://docs.google.com/document/d/1ggJfhlXCb6yBOPaXY74GP9X-dMcaQbuRaAraZXcOB5c/edit


int array_rotate_by_k(int len, int arr[], int k) {

    for(int i = 0; i < k -1; i++){
        int j, last;
        //Stores the last element of the array
        last = arr[len-1];  // 5

        for(j = len -1; j > 0; j--){
            //Shift element of array by one
            arr[j] = arr[j-1];  //
        }
        //Last element of array will be added to the start of array.
        arr[0] = last;
    }


    return arr;
}


int main () {

    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int* values = array_rotate_by_k(n, arr, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", values[i]);
    }

    return 0;
}



