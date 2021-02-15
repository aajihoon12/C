#include <stdio.h>

main() {
    int card1, card2;
    printf("카드를 두 장 뽑으세요\n");
    printf("1 ~ 13 스페이드, 14 ~ 26 다이아몬드, 27 ~ 39  하트, 40 ~ 52 클로버 \n");
    scanf("%d %d", &card1, &card2);

    card1 = (card1-1)/13;
    card2 = (card2-1)/13;

    printf("\n");
    if(card1==card2)
        printf("같은 모양입니다. \n");
    else    
        printf("다른 모양입니다. \n");

    return 0;
}