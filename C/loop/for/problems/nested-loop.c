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

     for (int i = 0; i < n; i++) {
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
     }

    return 0;
}
