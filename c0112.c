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
        printf("선택(1-4): ");
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
            printf("잘못된 선택 번호! \n\n");
        }

    PrintPurList(goods, idx, value);        
    DiscountByValue(&value);
    printf("고객 님의 할인 이후, 지불 금액은 %d 입니다. \n", value);

    return 0;
}

void GoodsPrint() { //Error Of Not Knowing = 영문을 모르는 에러
    printf("[ 물 품 ] \n");
    printf("1. 포도 \n");
    printf("2. 사과 \n");
    printf("3. 바나나 \n");
    printf("4. 구매 종료 \n");
}

void PrintPurList(char goods[][LEN], int idx, int value) {
    int i=0;

    printf("[ 구매한 제품 목록 ] \n");
    while(i<idx) 
        printf("%s  ", goods[i++]);

    printf("총 가격: %d \n", value);
}

void DiscountByValue(int * value) {
    if(*value>=300000)
        *value=(*value) * 0.7;
    if(*value>=200000)
        *value=(*value) * 0.8;
    if(*value>=50000)
        *value=(*value) * 0.9;
}