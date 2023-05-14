#include<stdio.h>

int main () {

    // Nested Loop

    /*
          *
         * *
        * * *
       * * * *
    */

    int n;
    scanf("%d", &n);

    for (int i = n; 0 < i; i--) {
        for (int k = 1; k <= n; k++) {
            if (k >= i) {
                printf("* ");
            }
            else {
                printf(" ");
            }
         }
         printf("\n");
     }

    return 0;
}
