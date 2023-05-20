#include<stdio.h>

void fun (int n, int i) {

    if (n < i) return;     // Base case
    printf("%d\n", i);     // Output

    fun(n, i+1);     // Recursion
}

int main () {

    // Print from 1 to N
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

    int n;
    scanf("%d", &n);
    
    fun(n, 1);

    return 0;
}