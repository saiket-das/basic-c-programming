#include<stdio.h>

int main () {

    // Do The Same
    // Problem link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/do-the-same
    
    int n, k; 
    scanf("%d", &n);
    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}