#include <stdio.h>
#include <string.h>

main(){
    int i;
    char msg[] = "C is fun";

    for(i=0;i<strlen(msg);i++){
        putchar(msg[i]);
    }
    putchar('\n');

    for(i=0;i<strlen(msg);i++){
        printf("%c",msg[i]);
    }
    printf("\n");

    return 0;
}
