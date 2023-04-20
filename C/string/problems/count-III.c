#include<stdio.h>
#include<string.h>

int main () {

    // Count III
    // Problem link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/count-iii
    
    char str[1001];
    scanf("%s", str);

    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++) {
        int idx = str[i] - 97;
        count[idx]++;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c - %d\n", i + 97, count[i]);
    }

    return 0;
}