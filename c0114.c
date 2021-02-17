#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 50

enum { WALLET=1, SHOES, COSMETICS, T_SHIRT, CAKE, EXIT };

void GoodsPrint();
void PrintPurList(char goods[][LEN], int * price, int idx);
float DiscountByValue(int * value);
int LuckyNumber();

main() {
    char goods[LEN][LEN];
    int price[LEN];
    int idx=0;
    int choice;
    int value=0;
    float disRate;

    while(1) {
        GoodsPrint();
        printf("����(1-6): ");
        scanf("%d", &choice);

        if(choice == EXIT)
            break;

        switch(choice) {
        case WALLET:
            strcpy(goods[idx], "wallet");
            price[idx++]=360000;
            value+=360000;
        case SHOES:
            strcpy(goods[idx], "shoes");
            price[idx++]=240000;
            value+=240000;
        case COSMETICS:
            strcpy(goods[idx], "cosmetices");
            price[idx++]=180000;
            value+=180000;
        case T_SHIRT:
            strcpy(goods[idx], "t_shirt");
            price[idx++]=120000;
            value+=120000;
        case CAKE:
            strcpy(goods[idx], "cake");
            price[idx++]=40000;
            value+=40000;
        default:
            printf("�߸��� ���� ��ȣ! ���Է� \n\n");
        }

    PrintPurList(goods, price, idx);        
    disRate=DiscountByValue(&value);

    printf("%d�� ���� ���� �����: %f \n", value, disRate);
    value=(int)(value*disRate);
    //printf("�����Ͻ� �� �ݾ�: %d \n", value * disRate);
    if(LuckyNumber()) {
        printf("**Win LukyNumber**\n");
        printf("�����Ͻ� �� �ݾ�: %d \n", value*0.8);
    }else
        printf("�����Ͻ� �� �ݾ�: %d \n", value);

    return 0;
}

void GoodsPrint() { //Error Of Not Knowing = ������ �𸣴� ����
    printf("[ �� ǰ ] \n");
    printf("1. WALLET \n");
    printf("2. SHOES \n");
    printf("3. COSMETICS \n");
    printf("4. T-SHIRT \n");
    printf("5. CAKE \n");
    printf("6. EXIT \n");
}

void PrintPurList(char goods[][LEN], int * price, int idx) {
    int i=0;

    printf("[ ������ ��ǰ ��� ] \n");
    while(i<idx)
        printf("%d. %9s  6%d \n", i+1, goods[i], price[i++]);

    printf("-�� ����: %d \n", value);
}

float DiscountByValue(int * value) {
    float disRate=1;

    if(*value>=200000)
        disRate=0.8;
    else if(*value>=100000)
        disRate=0.9;
    if(*value<100000)
        disRate=0.95;

    return disRate;
}

int LuckyNumber() {
    int cp;
    int user;
    int i=3;

    srand((int)time(0));
    user=rand()%5 + 1;
    while(i-->0) {
        cp=rand()%5 + 1;
        if(cp==user)
            return 1;
    }
    return 0;
}