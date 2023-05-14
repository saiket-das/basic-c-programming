#include<stdio.h>

int main () {

    // Nested Loop

    /*
      *     *
      *     *
      *     *
      *     *
    */

    int n;
    scanf("%d", &n);

    for (int i = i; i < n; i++) {
        for (int k = 1; k <= n; k++) {
            if (k == 1) {
                printf("* ");
            }
            else if (k == n) {
                printf(" *");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
     }

    return 0;
}
