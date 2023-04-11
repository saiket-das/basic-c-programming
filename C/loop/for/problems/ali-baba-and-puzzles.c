#include<stdio.h>

int main () {

    // Ali Baba and Puzzles
    // Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
    
    long long a, b, c, d, r1, r2;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    int count = 0;
    
    for (int i = 0; i < 3; i++) {
        // 0 = Addition    1 = subtraction and 2 = multiplication 
        if (count != 0) {
            break;
        }

        if (i == 0) {
            r1 = a + b;
        }
        else if (i == 1) {
            r1 = a - b;
        }
        else if (i == 2) {
            r1 = a * b;
        }
        
        for (int j = 0; j < 3; j++) {

            if (j == 0 && i != 0) {
                r2 = r1 + c;
            }
            else if (j == 1 && i != 1){
                r2 = r1 - c;

            }
            else if (j == 2 && i != 2){
                if (i == 0) {
                    r2 = a + (b * c);
                }
                else if (i == 1) {
                    r2 = a - (b * c);
                }
                else {
                    r2 = r1 * c;
                }
            }
            
            if (r2 == d) {
                count++;
                break;
            } 
        }
        
    }
    
    if (count == 0) {
        printf("NO");
    }
    else {
        printf("YES");
    }

    return 0;

}