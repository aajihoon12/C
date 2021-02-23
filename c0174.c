#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int i,num;
    int * pRandomNum;
    int total,maxNum,minNum;
    float average;

    srand(time(0));
    printf("난수 개수:");
    scanf(" %d",&num);

    pRandomNum = (int *)malloc(num * sizeof(int));

    if(!pRandomNum){
        printf("메모리 할당 실패\n");
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
    printf("최대값:%d\n",maxNum);
    printf("최소값:%d\n",minNum);
    printf("평균값:%.2f",average);
    free(pRandomNum);
    return 0;
}
