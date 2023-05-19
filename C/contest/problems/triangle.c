#include<stdio.h>

int main () {

    // Triangle
    // Problem link: https://www.hackerrank.com/contests/intra-phitron-contest-a-may-2023/challenges/triangle-31-1

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0) {
        printf("No");
    }
    else if (a == b && b == c) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}