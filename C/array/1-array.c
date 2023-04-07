#include<stdio.h>


int main () {

    // Array

    /**
      TYPE name [SIZE];
    **/

    int n;
    scanf("%d", &n);

    int mark[n];

    for (int i =0; i < n; i++) {
        printf("Enter student %d mark: ", i+1);
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < n; i++){
        printf("Student %d got %d marks\n",i+1, mark[i]);
    }


    return 0;
}
