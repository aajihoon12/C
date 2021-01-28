#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    int dice1;
    int dice2;

    srand((int)time(0));
    pirntf("주사위를 던집니다.");
   
    dice1=rand()%7;
    dice2=rand()%7;
    printf("dice1: %d \n", dice1);
    printf("dice2: %d \n", dice2);
    
    return 0;
}