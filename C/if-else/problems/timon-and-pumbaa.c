#include<stdio.h>

int main () {

    // Timon and Pumbaa
    // Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
    
    int a, b;
    scanf("%d %d", &a, &b);
    
    int sub;
    sub = a - b;

    if (sub >= 0) {
        printf("%d", sub);
    }
    else {
        printf("%d", 0);
    }


    return 0;
}