#include<stdio.h>
#include<string.h>

int main () {

    // Strings
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

    char str1[11], str2[11], str3[23];
    scanf("%s", str1);
    scanf("%s", str2);

    // Find the length of both string
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    // Concating both string into new string
    int i = 0;
    int k = 0;
    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;     // Copy all characters in string_3 from string_1
    }
    while (str1[k] != '\0') {
        str3[i] = str2[k];     // Copy all characters in string_3 from string_2 (after string_1's index)
        i++;
        k++;
    }
    // Another way to concat TWO string
    // strcat(str1, str2);     // Concat string_1 & string 2 (get the new string in string_1)


    // Answer output
    printf("%d %d\n", str1_len, str2_len);
    printf("%s%s\n", str1, str2);
    
    // Swap fist character of both string
    int temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;


    printf("%s %s\n", str1, str2);

    return 0;
}