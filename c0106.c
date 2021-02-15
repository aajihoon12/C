#include <stdio.h>

main() {
    int a=7;
    int b=4;
    printf("%d %d %d \n", a+b, a-b, a*b);
    printf("%d %.2f\n", a/b, (float)a/b);
    printf("%d %d \n", a/b, a%b);
    return 0;
}