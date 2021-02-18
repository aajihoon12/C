#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * func_random_card();
int func_to_num(char * pCard);
int func_to_score(char * pCard01,char * pCard02); //devide and conquer

main(){
    char cheolsu_card[4];
    int cheolsu_score,computer_score;
    int cheolsu_point=100;
    int computer_point=100;
    int game_round=0;
    int count1;
    int i;
    int point;
    char next_gubun;
    char * pCard01;
    char * pCard02;
    char * pCard03;
    char * pCard04;

    srand(time(0));
    while(1){
        game_round=game_round+1;

        if(game_round>1){
            printf("계속하시겠습니까? y / n :");
            scanf(" %c",&next_gubun);
            if(next_gubun=='n'){
                printf("게임종료!!");
                break;
            }
        }
        printf("=================================\n");
        printf("%d라운드\n",game_round);
        printf("=================================\n");

        printf("카드 입력:");
        scanf(" %s",cheolsu_card);
        pCard01=cheolsu_card;
        pCard02=func_random_card();
        printf("철수카드:[%s,%s]\n",pCard01,pCard02);

        pCard03=func_random_card();
        pCard04=func_random_card();
        printf("컴퓨터카드:[%s,%s]\n",pCard03,pCard04);

        printf("카드를 바꿀 수 있습니다!!\n");
        printf("숫자입력(숫자 번만큼 바꿀수 있음):");
        scanf(" %d",&count1);

        for(i=1;i<=count1;i++){
            pCard02=func_random_card();
            printf("철수카드:[%s,%s]\n",pCard01,pCard02);
            pCard04=func_random_card();
            printf("컴퓨터카드:[%s,%s]\n",pCard03,pCard04);

            cheolsu_score=func_to_score(pCard01,pCard02);
            computer_score=func_to_score(pCard03,pCard04);

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
            printf("-----------------------------\n");
        }
    }
    return 0;
}

char * func_random_card(){
    char * pCards[20]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    int card_index;
    card_index = rand()%13;
    return pCards[card_index];
}

int func_to_num(char * pCard){
    int card_num;
    if(*pCard=='A'){
        card_num=1;
    }else if(*pCard=='2'){
        card_num=2;
    }else if(*pCard=='3'){
        card_num=3;
    }else if(*pCard=='4'){
        card_num=4;
    }else if(*pCard=='5'){
        card_num=5;
    }else if(*pCard=='6'){
        card_num=6;
    }else if(*pCard=='7'){
        card_num=7;
    }else if(*pCard=='8'){
        card_num=8;
    }else if(*pCard=='9'){
        card_num=9;
    }else if(*pCard=='1' && *(pCard+1)=='0'){
        card_num=10;
    }else if(*pCard=='J'){
        card_num=11;
    }else if(*pCard=='Q'){
        card_num=12;
    }else{
        card_num=13;
    }
    return card_num;
}

int func_to_score(char * pCard01,char * pCard02){
    int card_num1,card_num2;
    int score;
    card_num1=func_to_num(pCard01);
    card_num2=func_to_num(pCard02);
    score=(card_num1+card_num2)%10;
    return score;
}
