#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int i,num;
    int * pRandomNum;
    int total,maxNum,minNum;
    float average;

    srand(time(0));
    printf("���� ����:");
    scanf(" %d",&num);

    pRandomNum = (int *)malloc(num * sizeof(int));

    if(!pRandomNum){
        printf("�޸� �Ҵ� ����\n");
        exit(1);
    }

    for(i=0;i<num;i++){
        pRandomNum[i] = (rand() % 500)+1;
    }

    maxNum=0;
    minNum=500;

    for(i=0;i<num;i++){
        total=total+pRandomNum[i];
        if(pRandomNum[i]>maxNum){
            maxNum=pRandomNum[i];
        }
        if(pRandomNum[i]<minNum){
            minNum=pRandomNum[i];
        }
    }
    average=(float)total/(float)num;
    printf("�ִ밪:%d\n",maxNum);
    printf("�ּҰ�:%d\n",minNum);
    printf("��հ�:%.2f",average);
    free(pRandomNum);
    return 0;
}
