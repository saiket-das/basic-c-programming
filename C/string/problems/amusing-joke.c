#include<stdio.h>
#include<stdbool.h>
#include<string.h>


// Contest Link - (https://vjudge.net/contest/493009)     password - fastfastfast

int main () {

    // Short Substrings     // No Submission
    // Link - (https://codeforces.com/problemset/problem/1367/A)

    /**
      Example
         Input
            SANTACLAUS
            DEDMOROZ
            SANTAMOROZDEDCLAUS

         Output
            YES
        ----------------
         Input
            PAPAINOEL
            JOULUPUKKI
            JOULNAPAOILELUPUKKI

         Output
            NO

      Breakdown
    **/

    char a[100];
    char b[100];
    char c[100];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    int a_len = 0, b_len = 0, max_len = 0;
    a_len = strlen(a);
    b_len = strlen(b);

    ((a > b) ? (max_len = b_len) : (max_len = a_len));

//    printf("%d", max_len);

    bool isTrue = false;

    for (int i = 0; i < max_len; i++) {

        for (int k = 0; k < strlen(c); k++) {
            printf("%d\n", isTrue);

            if (c[k] == a[i] || c[k] == b[i]) {
                isTrue = true;
                i++;
                continue;
                // return 0;
            }
            else{
                isTrue = false;
                break;
            }
        }
        printf("\n");

    }
    printf("Print true: %d\n", isTrue);

    return 0;
}
