#include <stdio.h>

int Recursive(int n) {
    if(n==0)
        return 1;

    return 2 * Recursive(n-1);
}

main() {
    int n;

    printf("2�� ����: ");   scanf("%d", &n); 
    printf("2�� n��: %d", Recursive(n));
    return 0;
}