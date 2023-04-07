#include<stdio.h>


int main () {

    // Quiz

    /**

    **/

//    int a[10];
//    a[0]+=10;
//    a[0]= a[0]*2;
//
//    printf("%d", a[0]);



//    Question: int a = {0, 2, 1, 4, 3}. Print the value of a[a[1]+1].

//    int a[5] = {0, 2, 1, 4, 3};
//    printf("%d", a[a[1]+1]);

    int fib[5];
	fib[0] = fib[1] = 1; // fib[0] =1, fib[1] = 1

	// 1, 1, 2, 3, 5, 8, 10 .....

	for (int i=2; i<5; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("%d", fib[4]);

    return 0;

}

