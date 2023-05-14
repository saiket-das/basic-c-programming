#include<stdio.h>

int main () {

    // Nested Loop

    /*
            *
          * * *
        * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
    */

    int n, s, m;
    scanf("%d", &n);

    // s = space, m = star(*)
    s = n - 1;
    m = 1;

    for (int i = 1; i <= (2 * n) - 1; i++) {

        // One line
        for (int j = 1; j <= s; j++) {
            printf("  ");
        }
        for (int j = 1; j <= m; j++) {
            printf("* ");
        }
        // Line finish

        if (i < n) {
            s--;
            m+=2;
        }
        else {
            s++;
            m-=2;
        }

        printf("\n");
    }
    return 0;
}


//    for (int i = 1; i <= n; i++) {
//        for (int k = 1; k <= s; k++) {
//            printf("  ");
//        }
//        for (int k = 1; k <= m; k++) {
//            printf("* ");
//        }
//        s--;
//        m+=2;
//        printf("\n");
//    }
//
//    s = 1;
//    m = m - 4;
//
//    for (int i = n; i > 0; i--) {
//        for (int k = 1; k <= s; k++) {
//            printf("  ");
//        }
//        for (int k = 1; k <= m; k++) {
//            printf("* ");
//        }
//        s++;
//        m-=2;
//        printf("\n");
//    }
