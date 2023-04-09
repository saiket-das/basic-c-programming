#include<stdio.h>
#include<math.h>


// Contest Link - (https://vjudge.net/contest/493009)     password - fastfastfast

int main () {

    // Short Substrings     // Accepted
    // Link - (https://codeforces.com/problemset/problem/1367/A)

    /**
      Example
         Input
            4
            abbaac
            ac
            bccddaaf
            zzzzzzzzzz

         Output
            abac
            ac
            bcdaf
            zzzzzz

      Breakdown
         In the third test case, Bob came up with the string a ="bcdaf", substrings of length 2 of string a are: "bc", "cd", "da", "af", so the string b ="bccddaaf".
    **/

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        char a[100];
        scanf("%s", a);

        int a_len = strlen(a);
        int b_len = (a_len / 2) + 2;

        char b[b_len];
        int p = 0;

        for (int j = 0; j <= strlen(a); j++) {


            if (a_len == 2) {
                b[p] = a[j];
                p++;
            }
            else if (j % 2 == 0 || a_len - 1 == j){
                b[p] = a[j];
                p++;
            }
            else {
                continue;
            }
        }
        printf("%s\n", b);
    }

    return 0;
}



