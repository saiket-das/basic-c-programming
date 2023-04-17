#include<stdio.h>
#include<string.h>


int main () {

    // Way Too Long Words
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char str[101];

        scanf("%s", str);
        int str_len = strlen(str);

        if (str_len <= 10) {
            printf("%s\n", str);
        }
        else {
            printf("%c%d%c\n", str[0], str_len - 2, str[str_len - 1]);
        }

    }

    return 0;
}
