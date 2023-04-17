#include<stdio.h>
#include<string.h>


int main () {

    // Create A New String
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

    char s[1001];
    char t[1001];

    gets(s);
    gets(t);

    int s_len = strlen(s);
    int t_len = strlen(t);

    printf("%d %d\n", s_len, t_len);
    printf("%s %s", s, t);

    return 0;
}