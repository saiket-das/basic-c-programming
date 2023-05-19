#include<stdio.h>

int main () {

    // Hash & Star Pattern
    // Problem link: https://www.hackerrank.com/contests/intra-phitron-contest-a-may-2023/challenges/hash-star-pattern

    int n;     // Test case
    scanf("%d", &n);

    int i = 1, j = n;
    while (i <= n) {
        if (i == j) {
            for (int k = 1; k <= n; k++) {
                printf("#"); 
            }  
        }
        else {
            for (int k = 1, l = n; k <= n; k++, l--) {
                if (k == l) {
                    printf("#");
                }
                else {
                    printf("*");
                }
            }
        }
        i++;
        j--;
        printf("\n");
    }

    return 0;
}