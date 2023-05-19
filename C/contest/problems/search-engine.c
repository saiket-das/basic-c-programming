#include<stdio.h>

int main () {

    // Search Engine!
    // Problem link: https://www.hackerrank.com/contests/intra-phitron-contest-a-may-2023/challenges/search-engine-3

    int t;     // Test case
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;     // Size of the list
        scanf("%d", &n);

        int values[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &values[j]);
        }

        int s;     // The value that you need to find
        scanf("%d", &s);

        int position = 0;
        for (int j = 0; j < n; j++) {
            if (values[j] == s) {
                position = j+1;
                break;
            }
        }

        if (position > 0) {
            printf("Case %d: %d\n", i+1, position);
        }
        else {
            printf("Case %d: Not Found\n", i+1);
        }
    }

    return 0;
}