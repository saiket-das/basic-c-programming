#include<stdio.h>
#include <stdlib.h>

int main () {

    // Matrix
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

    int n;     // m = Column & n = Row
    scanf("%d", &n);

    int matrix[n][n];

    // Matrix input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int diff = 0, sum_main = 0, sum_sec = 0;     
    // diff = Absolute difference of Main Diagonal elements summation and Secondary Diagonal elements summation
    // sum_main = Main Diagonal elements summation
    // sum_sec = Secondary Diagonal elements summation

    for (int i = 0, k = n -1; i < n; i++, k--) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sum_main = sum_main + matrix[i][j];     // Main Diagonal
            }
        }
        sum_sec = sum_sec + matrix[i][k];     // Secondary Diagonal
    }

    // / If value more than 0 then convert it into absoul value

    diff = abs(sum_sec - sum_main);     // Answer
    
    printf("%d", diff);     // Output
    
    return 0;
}