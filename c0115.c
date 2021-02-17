#include <stdio.h>

main() {
    int card1, card2;

    srand((int)time(0));
    printf("2 - 10 Draw two Cards: "); scanf("%d %d", &card1, &card2);
    printf("-카드점수: %d \n", (card1+card2)%10); 
    return 0;
}