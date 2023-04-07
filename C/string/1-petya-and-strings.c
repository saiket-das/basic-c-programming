#include<stdio.h>
#include <math.h>


// Contest Link - (https://vjudge.net/contest/493009)     password - fastfastfast

int main () {

    // Petya and Strings     // Wrong answer (My code is working properly)
    // Link - (https://codeforces.com/problemset/problem/112/A)

    /**
      Example
         Input
            aaaa
            aaaA

         Output
            0
         ------------

         Input
            abs
            Abz

         Output
            -1
         ------------

         Input
            abcdefg
            AbCdEfF

         Output
            1

      Breakdown

    **/

    char a[100];
    char b[100];

    scanf("%s", a);
    scanf("%s", b);

    int isFalse = 0;

    for (int i = 0; i < strlen(a); i++) {

        if ((a[i] == b[i]) || (a[i] - 32 == b[i]) || (b[i] + 32 == a[i])) {
            isFalse = 0;
        }
        else if (a[i] < b[i]) {
            isFalse = -1;
            break;
        }
        else {
            isFalse = 1;
            break;
        }
    }

    printf("%d\n", isFalse);

    return 0;
}
