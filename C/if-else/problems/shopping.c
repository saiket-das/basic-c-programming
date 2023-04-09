#include<stdio.h>


int main () {

    /**
       I will buy Punjabi if I have more than 1000 tk.
       I will buy pair of Shoes if I have 500 tk after purchasing the Punjabi.
    **/
    int tk;
    scanf("%d", &tk);

    if (tk > 1000) {
        printf("I will buy Punjabi\n");
        if (tk >= 1500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else {
        printf("Bad luck!\n");
    }


    return 0;
}

