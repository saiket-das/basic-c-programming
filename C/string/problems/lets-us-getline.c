#include<stdio.h>
#include<string.h>


int main () {

    // Let's use Getline
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

    char str[1000001];
    gets(str);

    int i = 0;
    while (str[i] != '\\') {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}