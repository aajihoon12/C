#include <stdio.h>

main(){
    int score1,score2,score3;
    int tot_score;

    printf("*** ��Ʈ ������ �����մϴ�. ***\n");

    printf("ù��° ����:");
    scanf(" %d",&score1);
    printf("�ι�° ����:");
    scanf(" %d",&score2);
    printf("����° ����:");
    scanf(" %d",&score3);

    tot_score=score1+score2+score3;
    printf("��������:%d",tot_score);

    return 0;
}
