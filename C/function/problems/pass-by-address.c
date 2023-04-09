#include<stdio.h>


void makePositive (double *pa) {
    if (*pa < 0) {
        *pa = -*pa;
    }
}

void makeEqualToAverage (double *pa, double *pb) {
    double average = (*pa + *pb) / 2;
    *pa = *pb = average;
}

int main () {

    // Pass By Address

    double a, b;
    scanf("%lf %lf", &a, &b);

    makePositive(&a);
    printf("%.0lf\n", a);

    makeEqualToAverage(&a, &b);
    printf("%.2lf %.2lf\n", a, b);

    return 0;
}




