#include<stdio.h>
#include<string.h>

int main () {

    // Counting char array

    char str[100];
    int count_arr[26] = {0};

    gets(str);

    for(int i = 0; i < strlen(str); i++) {
        int k = str[i];
        if (k >= 'a' && k <= 'z') {
            count_arr[k - 97]++;
        }
    }

    int isTrue = 1;
    for(int i = 0; i < 26; i++) {
        if (count_arr[i] == 0) {
            isTrue = 0;
            break;
        }
    }
    if (isTrue == 0) {
        printf("NO");
    }
    else {
        printf("YES");     // the quick brown fox jumps over the lazy dog
    }

    return 0;
}
