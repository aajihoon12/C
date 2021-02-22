#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int num1, num2;
    int result, solution;
    srand(time(0));

    printf("문제 맞추기 게임! \n");

    for(int i=0; i<3; i++){
        num1=(rand()%9+2);
        num2=(rand()%9+2);
        solution=num1*num2;
        printf("%d * %d = ?(입력:)",num1,num2);
        scanf(" %d",&result);

        if(result == solution){
            printf("정답!\n");
        }
        else{
            printf("오답!\n");
        }
    }
    return 0;
}
