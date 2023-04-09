 #include<stdio.h>


int main () {

    // Even Numbers
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

    /**
      Input
         10
      Output
         2
         4
         6
         8
         10
      -----------
      Input
         5
      Output
         2
         4

      Breakdown
         Print all even numbers between 1 and N inclusive in separate lines.
         Print the answer according to the required above. If there are no even numbers print -1.
    **/

    int n;
    scanf("%d", &n);

    
    if (n == 0) {
        printf("%d\n", -1);
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                printf("%d\n", i);
            }
        }
    }

    

    


    return 0;
}
