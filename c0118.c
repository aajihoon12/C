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
            printf("����Ͻðڽ��ϳ�? y / n :");
            scanf(" %c",&next_gubun);
            if(next_gubun=='n'){
                printf("��������!!");
                break;
            }
        }
        printf("==============================\n");
        printf("%d����\n",game_round);
        printf("==============================\n");

        printf("ö�� ù��° ī����� �Է�(2~10):");
        scanf(" %d",&cheolsu_card[0]);
        cheolsu_card[1]=(rand()%9)+2;

        computer_card[0]=(rand()%9)+2;
        computer_card[1]=(rand()%9)+2;

        printf("ö��ī��:[%d %d]\n",cheolsu_card[0],cheolsu_card[1]);
        printf("��ǻ��ī��:[%d %d]\n",computer_card[0],computer_card[1]);
        printf("ī�带 �ٲ� �� �ֽ��ϴ�!!\n");
        printf("�����Է�(���� ����ŭ �ٲܼ� ����):");
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
            printf("ö��ī��:[%d,%d]\n",cheolsu_card[0],cheolsu_card[1]);

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
            printf("��ǻ��ī��:[%d,%d]\n",computer_card[0],computer_card[1]);
            cheolsu_score=(cheolsu_card[0]+cheolsu_card[1])%10;
            computer_score=(computer_card[0]+computer_card[1])%10;
            printf("ö�� ī�� ����:%d\n",cheolsu_score);
            printf("��ǻ�� ī�� ����:%d\n",computer_score);

            if(i==count1){
                point=20;
            }else{
                point=5;
            }
            printf("%d�� ��\n",point);

            if(cheolsu_score>computer_score){
                printf("ö���� �̰���ϴ�.\n");
                cheolsu_point = cheolsu_point + point;
                computer_point = computer_point - point;
            }else if(cheolsu_score<computer_score){
                printf("��ǻ�Ͱ� �̰���ϴ�.\n");
                computer_point = computer_point + point;
                cheolsu_point = cheolsu_point - point;
            }else{
                printf("�����ϴ�.\n");
            }

            printf("ö���� ��ǻ���� ���� ������\n");
            printf("ö��:%d\n",cheolsu_point);
            printf("��ǻ��:%d\n",computer_point);
            printf("----------------------------\n");
        }
    }
    return 0;
}
