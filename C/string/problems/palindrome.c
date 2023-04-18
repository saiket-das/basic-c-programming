#include<stdio.h>
#include<string.h>

int main () {

    // Palindrome
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

    char str[100001];
    scanf("%s", str);

    int len = strlen(str);

    char str_cpy[len];
    strcpy(str_cpy, str);     // Make a duplicate of orginal string

    for (int i = 0, k = len-1; i < k; i++, k--) {
        int temp = str[i];
        str[i] = str[k];
        str[k] = temp;
    }

    int comp = strcmp(str, str_cpy);    // Compare orginal(after reverse) & duplicare string 
    // int comp = strcmp(str, strrev(str_cpy));     // Another & easy way to compare and reverse
    if (comp == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}