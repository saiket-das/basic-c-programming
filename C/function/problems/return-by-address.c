#include<stdio.h>
#include<math.h>


int getRoot (double a, double b, double c, double *root1, double *root2) {

    double D = (b*b) - (4*a*c);

    if (D < 0 ) return 0;
    else if (D == 0) {
        *root1 = (-b) / (2*a);
        return 1;
    }
    else {
        *root1 = (-b + sqrt(D))/(2*a);
        *root2 = (-b - sqrt(D))/(2*a);
        return 2;
    }
}

int main () {

    // Return By Address

    /**
      x^2 - 5x + 6 = 0

      Formula
      (-b +- sqrt(b^2 - 4ac)) / 2a

      ax^2 + bx + c = 0
    **/

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // printf("%.2lf\n", getRoot(a, b, c));

    double root1, root2;
    int roots = getRoot(a, b, c, &root1, &root2);

    printf("We have %d roots\n", roots);

    if (roots >= 1)     printf("Root1 %lf\n", root1);
    if (roots == 2)     printf("Root2 %lf\n", root2);
    return 0;
}




