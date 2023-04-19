#include<stdio.h>
#include<string.h>

int main () {

    // String copy

    char strA[100], strB[100];

    scanf("%s %s", strA, strB);

    int strB_len = strlen(strB);

    for (int i = 0; i <= strB_len; i++) {
        strA[i] = strB[i];
    }

    // In-built function to copy string
    // strcpy(strA, strB);

    printf("String 1 = %s\n", strA);     // After copy

    return 0;
}