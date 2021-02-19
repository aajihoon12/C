#include <stdio.h>

int main() {
    int i = 4, j = 6, n;
    n = i++ * j;

    printf("i=%d\n" , i);
    printf("n=%d", n);

    return 0;
}
