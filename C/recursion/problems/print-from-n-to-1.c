#include<stdio.h>

void fun (int n, int i) {

    if (n < i) return;     // Base case
    if(n == 1) {
        printf("%d", n);     // No space after last element
    }
    else {
        printf("%d ", n);
    }

    fun(n-1, 1);     // Recursion
}

int main () {

    // Print from N to 1
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

    int n;
    scanf("%d", &n);
    
    fun(n, 1);

    return 0;
}