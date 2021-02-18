#include <stdio.h>

#define LEN 30

main(){
    int c_score[LEN], m_score[LEN];
    int tot_scoreC=0, tot_scoreM=0;
    int target_Score=0;
    int idx=0;

    printf("*** 다트 게임을 시작합니다.(1-60) ***\n");
    printf("*** TARGET SCORE 200 *** \n\n");

    while(1) {
        if(target_Score>=200)
            break;

        printf("%d. Chulsu Dart: ", idx+1); scanf("%d", &c_score[idx]);
        printf("%d. Minsu Dart: ", idx+1); scanf("%d", &m_score[idx]);
    
        tot_scoreC+=c_score[idx];
        tot_scoreM+=m_score[idx];
        
        idx++;
    }
    
    if(tot_scoreC>=target_Score)
        printf("Chulsu(%d), Minsu(%d) = Chulsu Win, total(%d) \n", tot_scoreC, tot_scoreM, tot_scoreC+tot_scoreM);
    else
        printf("Chulsu(%d), Minsu(%d) = Minsu Win, total(%d) \n", tot_scoreC, tot_scoreM, tot_scoreC+tot_scoreM);

    return 0;
}
