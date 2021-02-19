#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

main(){
    int values[SIZE];
    int i,max,min;

    srand(time(0));
    for(i=0;i<SIZE;i++){
        values[i]=rand()%100;
        printf("%d ",values[i]);
    }
    printf("\n");

    max=values[0];
    min=values[0];//basic

    for(i=1;i<SIZE;i++){
        if(values[i]>max){
            max=values[i];
        }
        if(values[i]<min){
            min=values[i];
        }
    }
    printf("최대값은 %d, 최소값은 %d 이다.\n",max,min);

    return 0;
}
