#include<stdio.h>


int main () {

    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long multi = 1;
    multi = a * b;
    printf("%lld\n", multi);

    return 0;
}
