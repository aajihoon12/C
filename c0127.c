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

    printf("\n������ �ִٵ��� �����\n");
    printf("�ִٵ��� ���� game #%d\n",gameNumber + 1);
    printf("������ %d��\n",gameScores[gameNumber]);
    printf("���ٿ��� %d��\n",gameRebounds[gameNumber]);
    printf("��ý�Ʈ�� %dȸ\n",gameAssists[gameNumber]);
    return 0;
}
