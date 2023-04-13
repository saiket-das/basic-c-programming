#include<stdio.h>

int main () {

    // Even and Odd
    // Problem link: https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/even-and-odd-8-1

    int n, v;
    scanf("%d", &n);

    int even_sum = 0, odd_sum = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v);

        if (v % 2 == 0) {
            even_sum += v;
        }
        else {
            odd_sum += v;
        }
    }

    printf("%d %d", even_sum, odd_sum);

    return 0;
}