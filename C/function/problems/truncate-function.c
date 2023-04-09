#include<stdio.h>
#include<string.h>


void truncate (char str[], int n) {
    int len = strlen(str);
    if ((n < 0) && (n > len)) return;
    str[n] = '\0';
}

int main () {

    // Implementing The Truncate Function

    /**
      str -> "abcdef"
      truncate(str, 3);
      str -> "abc"

      str -> 'a', 'b', 'c', 'd', 'e', 'f', '\0'
      str -> 'a', 'b', 'c', '\0'
    **/

    char str[100];
    gets(str);

    int n;
    scanf("%d", &n);

    truncate(str, n);

    printf("%s", str);

    return 0;
}


