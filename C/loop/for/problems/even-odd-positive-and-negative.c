 #include<stdio.h>


int main () {

    // Even, Odd, Positive and Negative
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

    /**
      Input
         5
         -5 0 -3 -4 12

      Output
         Even: 3
         Odd: 2
         Positive: 1
         Negative: 3

      Breakdown
         Count how many of these values are even, odd, positive and negative.
    **/

    int n, x;
    scanf("%d", &n);

    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        // Even or Odd
        if (x % 2 == 0) even++;
        else            odd++;

        // Positive & Negative
        if (x > 0)       pos++;
        else if (x == 0) continue;
        else             neg++;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}

