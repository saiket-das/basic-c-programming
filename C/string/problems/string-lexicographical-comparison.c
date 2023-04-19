#include<stdio.h>
#include<string.h>

int main () {

    // String lexicographical comparison

    char strA[100], strB[100];
    scanf("%s %s", strA, strB);

    int i = 0;
    while (1) {
        if ((strA[i] == '\0') && (strB[i] == '\0')) {
            printf("Both are same = %s\n", strA);
            break;
        }
        else if (strA[i] == '\0' ) {
            printf("String 1 small = %s\n", strA);
            break;
        }

        else if (strB[i] == '\0' ) {
            printf("String 2 small = %s\n", strB);
            break;
        }

        if (strA[i] == strB[i]) {
            i++;
        }
        else if (strA[i] < strB[i]){
            printf("String 1 small = %s\n", strA);
            break;
        }
        else {
            printf("String 2 small = %s\n", strB);
            break;
        }
    }


    // In-built function
    int ans = strcmp(strA, strB);

    if (ans == -1) {
        printf("String 1 small = %s\n", strA);
    }
    else if (ans == 0) {
        printf("Both are same = %s\n", strA);
    }
    else {
        printf("String 2 small = %s\n", strB);
    }

    return 0;
}