#include<stdio.h>
#include<string.h>

int main () {

    // String Concatenation

    char strA[100], strB[100];
    scanf("%s %s", strA, strB);

    int i = 0, k = strlen(strA), j = strlen(strB);

    while (i <= j) {
        strA[k] = strB[i];
        i++;
        k++;
    }

    // In-built function
    // strcat(strA, strB);

    printf("String A = %s\n", strA);

    return 0;
}