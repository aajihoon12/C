#include <stdio.h>

int Recursive(int n) {
    if(n==0)
        return 1;

    return 2 * Recursive(n-1);
}

main() {
    int n;

    printf("2의 지수: ");   scanf("%d", &n); 
    printf("2의 n승: %d", Recursive(n));
    return 0;
}