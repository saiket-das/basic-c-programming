 #include<stdio.h>


int main () {

    // Digits
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

    /**
      Input
         4        // number of test cases
         121
         39
         123456
         1200


      Output
         1 2 1
         9 3
         6 5 4 3 2 1
         0 0 2 1

      Breakdown
         Print the digits of that number from right to left separated by space.
    **/

    int t, n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d", &n);

        do {
            int digit;
            digit = n % 10;
            n /= 10;

            printf("%d ", digit);
        }
        while (n);
        
        printf("\n");
    }

    return 0;
}
