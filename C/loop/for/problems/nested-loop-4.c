#include<stdio.h>

int main () {

    // Nested Loop

    /*
            *
          * * *
        * * * * *
      * * * * * * *
    */

    int n, s, m;
    scanf("%d", &n);

    // s = space, m = star(*)
    s = n - 1;
    m = 1;

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= s; k++) {
            printf("  ");
        }
        for (int k = 1; k <= m; k++) {
            printf("* ");
        }
        s--;
        m+=2;
        printf("\n");
     }

    return 0;
}
