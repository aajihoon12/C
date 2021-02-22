#include <stdio.h>

main() {
    int score[3][2];
    int i,j;
    int seq, tot;

    for(i=0; i<3; i++){
        printf("두 과목 점수 입력:\n");
            for(j=0;j<2;j++){
                scanf(" %d",&score[i][j]);
            }
    }

    seq=0;
    for(i=0;i<3;i++){
        tot=0;
        seq=seq+1;
        for(j=0;j<2;j++){
            tot=tot+score[i][j];
        }
        printf("%d번째 학생 총점:%d\n",seq,tot);
    }
    return 0;
}
