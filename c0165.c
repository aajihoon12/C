#include <stdio.h>

main(){
    int scores[5];
    int i,j;
    int seq;
    int rank;

    for(i=0;i<5;i++){
        printf("�����Է�:");
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
        printf("%d��° �л������� %d���̰� ����� %d���̴�.\n",seq,scores[i],rank);
    }
    return 0;
}
