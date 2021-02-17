#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int cheolsu_card[4];
    int computer_card[4];
    int cheolsu_score,computer_score;
    int cheolsu_point=100;
    int computer_point=100;
    int game_round=0;
    int count1;
    int i,num1,num2,tmp;
    int point;
    char next_gubun;

    srand(time(0));
    while(1){
        game_round=game_round+1;

        if(game_round>1){
            printf("계속하시겠습니끼? y / n :");
            scanf(" %c",&next_gubun);
            if(next_gubun=='n'){
                printf("게임종료!!");
                break;
            }
        }
        printf("==============================\n");
        printf("%d라운드\n",game_round);
        printf("==============================\n");

        printf("철수 첫번째 카드숫자 입력(2~10):");
        scanf(" %d",&cheolsu_card[0]);
        cheolsu_card[1]=(rand()%9)+2;

        computer_card[0]=(rand()%9)+2;
        computer_card[1]=(rand()%9)+2;

        printf("철수카드:[%d %d]\n",cheolsu_card[0],cheolsu_card[1]);
        printf("컴퓨터카드:[%d %d]\n",computer_card[0],computer_card[1]);
        printf("카드를 바꿀 수 있습니다!!\n");
        printf("숫자입력(숫자 번만큼 바꿀수 있음):");
        scanf(" %d",&count1);
        for(i=1;i<=count1;i++){
            num1=(rand()%9)+2;
            if(cheolsu_card[0]<cheolsu_card[1]){
                tmp = cheolsu_card[0];
                cheolsu_card[0] = num1;
                num1 = tmp;
            }else{
                tmp = cheolsu_card[1];
                cheolsu_card[1] = num1;
                num1 = tmp;
            }
            printf("철수카드:[%d,%d]\n",cheolsu_card[0],cheolsu_card[1]);

            num2=(rand()%9)+2;
            if(computer_card[0] < computer_card[1]){
                tmp = computer_card[0];
                computer_card[0] = num2;
                num2 = tmp;
            }else {
                tmp = computer_card[1];
                computer_card[1] = num2;
                num2 = tmp;
            }
            printf("컴퓨터카드:[%d,%d]\n",computer_card[0],computer_card[1]);
            cheolsu_score=(cheolsu_card[0]+cheolsu_card[1])%10;
            computer_score=(computer_card[0]+computer_card[1])%10;
            printf("철수 카드 점수:%d\n",cheolsu_score);
            printf("컴퓨터 카드 점수:%d\n",computer_score);

            if(i==count1){
                point=20;
            }else{
                point=5;
            }
            printf("%d점 판\n",point);

            if(cheolsu_score>computer_score){
                printf("철수가 이겼습니다.\n");
                cheolsu_point = cheolsu_point + point;
                computer_point = computer_point - point;
            }else if(cheolsu_score<computer_score){
                printf("컴퓨터가 이겼습니다.\n");
                computer_point = computer_point + point;
                cheolsu_point = cheolsu_point - point;
            }else{
                printf("비겼습니다.\n");
            }

            printf("철수와 컴퓨터의 현재 점수는\n");
            printf("철수:%d\n",cheolsu_point);
            printf("컴퓨터:%d\n",computer_point);
            printf("----------------------------\n");
        }
    }
    return 0;
}
