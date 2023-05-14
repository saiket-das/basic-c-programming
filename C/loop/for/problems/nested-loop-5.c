#include<stdio.h>

int main () {

    // Nested Loop

    /*
      * * * * * * *
        * * * * *
          * * *
            *
    */

    int n, s, m;
    scanf("%d", &n);

    // s = space, m = star(*)
    s = 0;
    m = n + n - 1;

    for (int i = n; i > 0; i--) {
        for (int k = 0; k < s; k++) {
            printf("  ");
        }
        for (int k = 0; k < m; k++) {
            printf("* ");
        }
        s++;
        m-=2;
        printf("\n");
    }

    return 0;
}
