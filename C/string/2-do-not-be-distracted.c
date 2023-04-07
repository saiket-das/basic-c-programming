#include<stdio.h>
#include <math.h>


// Contest Link - (https://vjudge.net/contest/493009)     password - fastfastfast

int main () {

    // Do Not Be Distracted!     // No Submission
    // Link - (https://codeforces.com/problemset/problem/1520/A)

    /**
      Example
         Input
            5
            3
            ABA
            11
            DDBBCCCBBEZ
            7
            FFGZZZY
            1
            Z
            2
            AB

         Output
            NO
            NO
            YES
            YES
            YES

      Breakdown

    **/

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int size;
        scanf("%d", &size);

        char a[size];
        scanf("%s", a);

        int isTrue = 1;

        for (int i = 1; i < strlen(a); i++) {
            int a2 = 0;

            if ( a[i] == a[0] || a[i]) {
                isTrue = 0;
            }
        }
    }

    return 0;
}

