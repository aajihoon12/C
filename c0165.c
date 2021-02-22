#include <stdio.h>

main(){
    int scores[5];
    int i,j;
    int seq;
    int rank;

    for(i=0;i<5;i++){
        printf("점수입력:");
        scanf(" %d",&scores[i]);
    }

    seq=0;
    for(i=0;i<5;i++){
        seq=seq+1;
        rank=1;
        for(j=0;j<5;j++){
            if(scores[i]<scores[j]){
                rank=rank+1;
            }
        }
        printf("%d번째 학생점수는 %d점이고 등수는 %d등이다.\n",seq,scores[i],rank);
    }
    return 0;
}
