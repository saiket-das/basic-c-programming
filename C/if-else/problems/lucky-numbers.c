#include<stdio.h>

int main () {

    // Lucky Numbers
    // Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
    
    int n;
    scanf("%d", &n);
    
    int digit1, digit2;
    digit1 = n % 10;
    n /= 10;
    digit2 = n % 10;

    if ((digit1 % digit2 == 0) || (digit2 % digit1 == 0)) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}