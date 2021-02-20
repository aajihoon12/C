#include <stdio.h>

void Gugudan();

main() {
    Gugudan();
    return 0;
}

void Gugudan() {
    int i,j;

    i=2;
    while(i<10){
        j=1;
        while(j<10){
            printf("%d * %d = %d \n", i, j, i*j);
            j++;
        }
        printf("\n");
        i++;
    }
}