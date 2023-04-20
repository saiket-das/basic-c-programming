#include<stdio.h>

int main () {

    // Workers
    // Problem link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/workers-1
    
    int m1, m2, d; 
    scanf("%d", &m1);
    scanf("%d", &m2);
    scanf("%d", &d);

    int m2_need = (m1 * d) / m2;
    printf("%d", m2_need);

    return 0;
}