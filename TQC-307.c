#include <stdio.h>
#include <stdlib.h>
int compute(int a[]) {
    int max, min, i;
    max = a[0];
    for (i=1; i<5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}
int main() {
    int a[5];
    int i;
    for (i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", compute(a));
}