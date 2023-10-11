#include <stdio.h>
#include <stdlib.h>
int compute(int n) {
    int a[11];
    int a0 = 0, a1 = 1, i;
    a[0] = 0, a[1] = 1;
    for (i=2; i<11; i++) {
        a[i] = a0 + a1;
        a0 = a1;
        a1 = a[i];
    }
    return a[n];
}
int main() {
    int i, n;
    scanf("%d", &n);
    for (i=n; i>0; i--) {
        printf("fib(%d) = %d\n", i, compute(i));
    }
}