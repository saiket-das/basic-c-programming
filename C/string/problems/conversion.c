#include<stdio.h>
#include<string.h>

int main () {

    // Conversion
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

    char str[100001];
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 32);
        }
        else {
            printf("%c", 32);
        }
    }

    return 0;
}