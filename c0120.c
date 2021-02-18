#include <stdio.h>

main(){
    int score1,score2,score3;
    int tot_score;

    printf("*** 다트 게임을 시작합니다. ***\n");

    printf("첫번째 점수:");
    scanf(" %d",&score1);
    printf("두번째 점수:");
    scanf(" %d",&score2);
    printf("세번째 점수:");
    scanf(" %d",&score3);

    tot_score=score1+score2+score3;
    printf("최종점수:%d",tot_score);

    return 0;
}
