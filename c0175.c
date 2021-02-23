#include <stdio.h>
#include <stdlib.h>

main(){
    int count,i,num;
    int * p; // pointer

    printf("정수 개수 입력:");
    scanf(" %d",&count); //사용자에게 값을 받아서,
    p = (int *)malloc(count * sizeof(int));  //배열을 유연하게 형성
    if(!p){
        printf("메모리 할당 실패\n");
        exit(1);
    }

    for(i=0;i<count;i++){
        printf("정수 입력:");
        scanf(" %d",&num);
        p[i]=num;
    }

    printf("입력된 정수는:");
    for(i=0;i<count;i++){
        printf("%d ",p[i]);
    }
    free(p); //최종적으로 제거
    return 0;
}
