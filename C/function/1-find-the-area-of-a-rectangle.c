#include<stdio.h>

// Docs link; https://docs.google.com/document/d/1ggJfhlXCb6yBOPaXY74GP9X-dMcaQbuRaAraZXcOB5c/edit

void area_of_rectangle (int length, int width) {

    int area;
    area = length * width;
    printf("%d", area);
}


int main () {

    int length, width;
    scanf("%d %d", &length, &width);

    area_of_rectangle(length, width);

    return 0;
}
