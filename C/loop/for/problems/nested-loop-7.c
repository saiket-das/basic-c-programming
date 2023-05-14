#include<stdio.h>

int main () {

    // Nested Loop

    /*
      1 2 3 4
      1 2 3
      1 2
      1
    */

    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
