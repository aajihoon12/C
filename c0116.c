#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DrawCards(int * card1, int * card);

main() {
    int c_card1, c_card2, c_score;
    int p_card1, p_card2, p_score;

    c_score=DrawCards(&c_card1, &c_card2);
    p_score=DrawCards(&p_card1, &p_card2);

    if(c_score>p_score)
        printf("繹熱(%d,%d): %d薄, 團熱(%d,%d): %d薄 繹熱 蝓 \n", c_card1, c_card2, c_score, p_card1, p_card2, p_score);
    else if(c_score<p_score)
        printf("繹熱(%d,%d): %d薄, 團熱(%d,%d): %d薄 團熱 蝓 \n", c_card1, c_card2, c_score, p_card1, p_card2, p_score);
    else 
        printf("繹熱(%d,%d): %d薄, 團熱(%d,%d): %d薄  鼠蝓睡 \n", c_card1, c_card2, c_score, p_card1, p_card2, p_score);

    return 0;
}

int DrawCards(int * card1, int * card2) {
    srand((int)time(0));

    printf("2-10 Darw A Card: "); scanf("%d", card1);
    *card2=rand()%9 + 2;

    return *card1 + *card2 % 10;
}