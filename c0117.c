#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DrawCards(int * card1, int * card2);
int DrawCardsPG(int * card1, int * card2);

main() {
    int c_card1, c_card2, c_score, c_point=30;
    int p_card1, p_card2, p_score, p_point=30;

    srand((int)time(0));

    while(c_point<=0 || p_point<=0){
        c_score=DrawCards(&c_card1, &c_card2);
        p_score=DrawCardsPG(&p_card1, &p_card2);

        if(c_score>p_score){
            printf("ö��(%d,%d): %d��, ��ǻ��(%d,%d): %d�� ö�� �� \n", c_card1, c_card2, c_score, p_card1, p_card2, p_score);
            c_point+=20;
            p_point-=20;
        }
        else if(c_score<p_score) {
            printf("ö��(%d,%d): %d��, ��ǻ��(%d,%d): %d�� ��ǻ�� �� \n", c_card1, c_card2, c_score, p_card1, p_card2, p_score);
            p_point+=20;
            c_point-=20;
        }
        else 
            printf("ö��(%d,%d): %d��, ��ǻ��(%d,%d): %d��  ���º� \n", c_card1, c_card2, c_score, p_card1, p_card2, p_score);
    }
    if(c_point>0)
        printf("ö�� ��, ����: %d \n", c_point);
    else
        printf("��ǻ�� ��, ����: %d \n", p_point); 

    return 0;
}

int DrawCards(int * card1, int * card2) {
    printf("2-10 Darw A Card: "); scanf("%d", card1);
    *card2=rand()%9 + 2;

    return *card1 + *card2 % 10;
}

int DrawCardsPG(int * card1, int * card2) {
    *card1=rand()%9 + 2;
    *card2=rand()%9 + 2;

    return (*card1 + *card2) % 10;
}