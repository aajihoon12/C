#include <stdio.h>

#define LEN 50

enum { GRAPE=1, APPLE, BANANA, EXIT };

void GoodsPrint();
void PrintPurList(char goods[][LEN], int idx, int value);
void DiscountByValue(int * value);

main() {
    char goods[LEN][LEN];
    int idx=0, i=0;
    int choice;
    int value=0;

    while(1) {
        GoodsPrint();
        printf("����(1-4): ");
        scanf("%d", &choice);

        switch(choice) {
        case GRAPE:
            strcpy(goods[idx++], "grape");
            value+=4000;
        case APPLE:
            strcpy(goods[idx++], "apple");
            value+=2000;
        case BANANA:
            strcpy(goods[idx++], "banana");
            value+=3000;
        case EXIT:
            break;
        default:
            printf("�߸��� ���� ��ȣ! \n\n");
        }

    PrintPurList(goods, idx, value);        
    DiscountByValue(&value);
    printf("�� ���� ���� ����, ���� �ݾ��� %d �Դϴ�. \n", value);

    return 0;
}

void GoodsPrint() { //Error Of Not Knowing = ������ �𸣴� ����
    printf("[ �� ǰ ] \n");
    printf("1. ���� \n");
    printf("2. ��� \n");
    printf("3. �ٳ��� \n");
    printf("4. ���� ���� \n");
}

void PrintPurList(char goods[][LEN], int idx, int value) {
    int i=0;

    printf("[ ������ ��ǰ ��� ] \n");
    while(i<idx) 
        printf("%s  ", goods[i++]);

    printf("�� ����: %d \n", value);
}

void DiscountByValue(int * value) {
    if(*value>=300000)
        *value=(*value) * 0.7;
    if(*value>=200000)
        *value=(*value) * 0.8;
    if(*value>=50000)
        *value=(*value) * 0.9;
}