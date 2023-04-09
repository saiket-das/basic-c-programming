#include<stdio.h>
#include<limits.h>

int main () {

    // Max
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

    /**
      Input
         5
         1 8 5 7 5

      Output
         8

      Breakdown
         Find maximum number in these N numbers.
    **/

    int n, x;
    scanf("%d", &n);

    int max = INT_MAX;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);

        if (max < x) {
            max = x;
        }
    }

    printf("%d\n", max);

    return 0;
}



