#include <stdio.h>
#include <stdlib.h>
int compute(int arr[]) {
    int result;
    switch (arr[1]) {
    case 1:
        result = arr[0] + arr[2];
        break;
    case 2:
        result = arr[0] * arr[2];
    }
    return result;
}
int main() {
    int i;
    int arr[3];
    for (i=0; i<3; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", compute(arr));
}