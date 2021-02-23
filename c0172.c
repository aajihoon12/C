//히프 메모리: 아직 사용되지 않은 메모리
//          프로그램에게 필요한 만큼의 메모리를 사용할 수 있게 함
//          malloc()함수: 히프메모리 할당
//          free()함수: 히프메모리 반납
#include <stdio.h>
#include <stdlib.h>

main(){
    int * temps;

    temps =(int *)malloc(10 * sizeof(int));
    if(temps==0){
        printf("충분한 메모리가 없음\n");
        exit(1);
    }else{
        printf("메모리 할당\n");
    }
    free(temps);
    printf("메모리 해제\n");
    return 0;
}
