#include<stdio.h>

int max (int a, int b) {
    if (a < b) return b;
    else       return a;
}


int getMax (int len, int arr[]) {
    int ans = arr[0];
    for (int i = 1; i < len; i++) {
        ans = max(ans, arr[i]);
    }
    return ans;
}


int main () {

    // Finding Max Of Array With Function

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = getMax(n, arr);
    printf("%d", max);

    return 0;
}

