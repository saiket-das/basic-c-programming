 #include<stdio.h>


int main () {

    // Even, Odd, Positive and Negative
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

    /**
      Input
         2200
         1020
         1999
         1000
         9999

      Output
         Wrong
         Wrong
         Correct

      Breakdown
         Note: The "Correct" password is the number 1999.
         Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.
    **/

    int n;
    int correct_password = 1999;

    while (scanf("%d", &n) != EOF) {  // EOF = End Of File

        if (n == correct_password) {
            printf("Correct\n");
            break;
        }
        else {
            printf("Wrong\n");
        }
    }

    return 0;
}


