#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int num1, num2;
    int result, solution;
    srand(time(0));

    printf("���� ���߱� ����! \n");

    for(int i=0; i<3; i++){
        num1=(rand()%9+2);
        num2=(rand()%9+2);
        solution=num1*num2;
        printf("%d * %d = ?(�Է�:)",num1,num2);
        scanf(" %d",&result);

        if(result == solution){
            printf("����!\n");
        }
        else{
            printf("����!\n");
        }
    }
    return 0;
}
