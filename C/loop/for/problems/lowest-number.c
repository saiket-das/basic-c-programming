#include<stdio.h>
#include<limits.h>
 
int main () {

    // Lowest Number
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

    int n;
    scanf("%d", &n);
 
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int low = INT_MAX;
    int pos = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < low) {
           low = arr[i]; 
           pos = i+1;
        }
    }
    printf("%d %d\n", low, pos);
 
    return 0;
}