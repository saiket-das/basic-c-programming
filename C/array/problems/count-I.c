#include<stdio.h>

int main () {

    // Count I
    // Problem link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/count-i

    int n, even = 0, odd = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    
    printf("%d %d", even, odd);

    return 0;
}