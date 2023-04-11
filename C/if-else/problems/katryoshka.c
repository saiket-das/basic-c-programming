#include<stdio.h>


long long minimum (long long a, long long b) {
    return (a > b) ? b : a;
}

int main () {

    // Katryoshka
    // Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

    long long n, m, k, min, ans = 0;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (n == 0 || k == 0) {
        printf("%d", 0);
    }
    else
    {
        min = minimum(minimum(n, m), k);
        n -= min;
        // m -= min;  // 3rd option is better than 2nd one because in 2nd option I need 1 eye extra compare to 3rd option. So 2nd option is not better to make more statue.
        k -= min;
        ans += min;

        ans += minimum(n / 2, k);
        printf("%lld", ans);
    }


    

    return 0;
}
