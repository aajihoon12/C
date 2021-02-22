#include <stdio.h>

main() {
    int i, j;
    int s_count;
    int rank;
    int tot_score=0;
    float average;
    int s_score[30];
    char s_name[30][10]; //2차원 배열은 해당 방식으로 사용하는 것이 적합하다고 생각함.
    printf("학생수 입력:");
    scanf(" %d",&s_count);

    for(i=0;i<s_count;i++){
        printf("이름 입력:");
        scanf(" %s",s_name[i]);
        printf("점수 입력:");
        scanf(" %d",&s_score[i]);
    }

    for(i=0;i<s_count;i++){
        tot_score=tot_score+s_score[i];
        rank=1;
        for(j=0;j<s_count;j++){
            if(s_score[i] < s_score[j]){
                rank=rank+1;
            }
        }
        printf("%s학생 점수:%d 등수:%d등\n",s_name[i],s_score[i],rank);
    }
    printf("=================================\n");
    average=(float)tot_score/s_count;
    printf("전체 학생 점수 평균:%.1f",average);
    return 0;
}
