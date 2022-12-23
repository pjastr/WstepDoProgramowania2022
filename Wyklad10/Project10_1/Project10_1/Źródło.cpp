#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

long long f[1000100];

int main()
{
    int t, n;
    scanf("%d", &t);
    f[0] = 1;
    for (int i = 1; i <= 1000000; i++) {
        f[i] = f[i - 1] * i;
        while (f[i] % 10 == 0) {
            f[i] /= 10;
        }
        f[i] %= 100;
    }
    while (t--) {
        scanf("%d", &n);
        printf("%lld %lld\n", f[n] / 10, f[n] % 10);
    }
    return 0;
}
