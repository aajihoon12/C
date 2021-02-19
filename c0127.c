#include <stdio.h>

main(){
    int gameScores[10]={12,5,21,15,32,10,6,31,11,10};
    int gameRebounds[10]={5,7,1,5,10,3,0,7,6,4};
    int gameAssists[10]={2,9,4,3,6,1,11,6,9,10};
    int bestGameScores = 0;
    int gameNumber = 0;
    int i=0;

    for(i=0;i<10;i++){
        if(gameScores[i]>bestGameScores){
            bestGameScores=gameScores[i];
            gameNumber=i;
        }
    }

    printf("\n선수의 최다득점 경기기록\n");
    printf("최다득점 경기는 game #%d\n",gameNumber + 1);
    printf("득점은 %d점\n",gameScores[gameNumber]);
    printf("리바운드는 %d점\n",gameRebounds[gameNumber]);
    printf("어시스트는 %d회\n",gameAssists[gameNumber]);
    return 0;
}
