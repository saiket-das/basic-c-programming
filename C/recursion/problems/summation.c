#include<stdio.h>

long long fun (int arr[], int i, int len, long long sum) {    
    if (i == len) return sum;     // Base case

    sum = sum + arr[i];     // Summation

    fun (arr, i+1, len, sum);     // Recursion
}

int main () {

    // Summation
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    long long sum = fun(arr, 0, n, 0);
    printf("%lld", sum);     // Output

    return 0;
}