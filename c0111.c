#include <stdio.h>

main() {
    int card1, card2;
    printf("ī�带 �� �� ��������\n");
    printf("1 ~ 13 �����̵�, 14 ~ 26 ���̾Ƹ��, 27 ~ 39  ��Ʈ, 40 ~ 52 Ŭ�ι� \n");
    scanf("%d %d", &card1, &card2);

    card1 = (card1-1)/13;
    card2 = (card2-1)/13;

    printf("\n");
    if(card1==card2)
        printf("���� ����Դϴ�. \n");
    else    
        printf("�ٸ� ����Դϴ�. \n");

    return 0;
}