#include <stdio.h>
#include <stdlib.h>

main(){
    int i;
    int num;
    int * temps[5];

    for(i=0;i<5;i++){
        printf("데이터 개수:");
        scanf(" %d",&num);
        temps[i]=(int *)malloc(num * sizeof(int));
    }
    printf("메모리 할당 완료\n");

    for(i=0;i<5;i++){
        free(temps[i]);
    }
    printf("메모리 해제 완료\n");
    return 0;
}
