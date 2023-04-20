#include<stdio.h>
#include<string.h>

int main () {

    // Count II
    // Problem link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/count-2-1-1

    char str[1001];
    scanf("%s", str);

    int vowel = 0; 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel++;
        }
    }
    printf("%d", vowel);

    return 0;
}