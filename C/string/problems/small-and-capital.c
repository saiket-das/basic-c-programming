#include<stdio.h>
#include<string.h>

int main () {

    // Small and Capital
    // Problem link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/small-and-capital

    char str[1001];
    scanf("%s", str);

    int capital = 0, small = 0; 
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A') && (str[i] <= 'Z')) {
            capital++;
        }
        else if ((str[i] >= 'a') && (str[i] <= 'z')) {
            small++;
        }
    }
    printf("%d %d", capital, small);

    return 0;
}