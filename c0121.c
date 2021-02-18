#include <stdio.h>

main(){
    int c_score[3], m_score[3];
    int tot_scoreC=0, tot_scoreM=0;
    int i=0;

    printf("*** 다트 게임을 시작합니다. ***\n");

    while(i<3) {
        printf("%d. Chulsu Dart: ", i+1); scanf("%d", &c_score[i]);
        printf("%d. Minsu Dart: ", i+1); scanf("%d", &m_score[i]);
    
        tot_scoreC+=c_score[i];
        tot_scoreM+=m_score[i];
        
        i++;
    }
    
    if(tot_scoreC>tot_scoreM)
        printf("Chulsu(%d), Minsu(%d) = Chulsu Win, total(%d) \n", tot_scoreC, tot_scoreM, tot_scoreC+tot_scoreM);
    else
        printf("Chulsu(%d), Minsu(%d) = Minsu Win, total(%d) \n", tot_scoreC, tot_scoreM, tot_scoreC+tot_scoreM);

    return 0;
}
