#include<stdio.h>
#include<string.h>


int main () {

    // Count
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

    char str[1000001];

    gets(str);

    int str_len = strlen(str);

    int sum = 0;

    // Asii Value: 0 -> 48, 1 -> 49, 2 -> 50, ......, 9 -> 57
    for (int i = 0; i < str_len; i++) {
        int digit = str[i] - 48;
        sum += digit;
    }

    printf("%d", sum);

    return 0;
}