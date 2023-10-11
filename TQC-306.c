#include <stdio.h>
#include <stdlib.h>
int compute(int num) {
    int i, total = 1;
    for (i=1; i<=num; i++) {
        total *= i;
    }
    return total;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d! = %d\n", n, compute(n));
}