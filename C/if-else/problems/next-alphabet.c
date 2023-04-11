#include<stdio.h>

int main () {

    // Next Alphabet
    // Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

    char a;
    scanf("%c", &a);

    if (a >= 97 & a < 122) {
        // next = a;
        printf("%c", a + 1);
    }

    else if (a == 122) {
        printf("a");
    }

    return 0;
}



