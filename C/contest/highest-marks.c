#include<stdio.h>
#include<limits.h>

int main () {

    // Highest Marks
    // Problem link: https://www.hackerrank.com/contests/intra-phitron-contest-a-may-2023/challenges/highest-marks-1

    int n;     // Test case
    scanf("%d", &n);

    int highest_mark = INT_MIN;

    int marks[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);

        if (marks[i] > highest_mark) {
            highest_mark = marks[i];
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", highest_mark - marks[i]);
    }

    return 0;
}