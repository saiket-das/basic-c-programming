#include<stdio.h>
#include<string.h>

int main () {

    // Create a new string
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

    char s[1000];
    char t[1000];

    scanf("%s %s", s, t);

    printf("%d %d\n", strlen(s), strlen(t));
    printf("%s %s\n", s, t);

    return 0;
}