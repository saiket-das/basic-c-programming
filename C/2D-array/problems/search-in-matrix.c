#include<stdio.h>
#include <stdlib.h>

int main () {

    // Search In Matrix
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

    int m, n, x, isTrue = 0;
    // m = Column & n = Row
    // x = the number to check that is it exist in the 2D array
    //isTrue = variable decalare true or false after checking
    
    scanf("%d %d", &n, &m);

    int matrix[m][n];

    // Matrix input
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    scanf("%d", &x);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == x) {
                isTrue = 1;
                break;
            }
        }
    }

    if (isTrue == 1) {
        printf("will not take number");
    }
    else {
        printf("will take number");
    }
    
    return 0;
}