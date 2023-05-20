#include<stdio.h>

void fun (int n) {

    if (n == 0) return;     // Base case
    printf("I love Recursion\n");     // Output

    fun(n-1);     // Recursion
}

int main () {

    // Print Recursion
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

    int n;
    scanf("%d", &n);
    
    fun(n);

    return 0;
}