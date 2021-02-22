#include <stdio.h>

main(){
    int point=100;
    int num;
    char * pContents[5] ={" ","음악","게임","만화","영화"};
    printf("최초포인트:%d",point);

    while(1){
        printf("0:종료 1:음악 2:게임 3:만화 4:영화\n");
        printf("콘텐츠를 구매하시겠습니까?(번호 선택):");
        scanf(" %d",&num);
        if(num==0){
            printf("구매종료");
            break;
        }else{
            if(point<=0){
                printf("포인트가 부족하여 콘텐츠를 구매할 수 없음");
                break;
            }else{
                printf("%s콘텐츠 구매 완료\n",pContents[num]);
                point=point-25;
                printf("현재포인트:%d\n",point);
            }
        }
    }
    return 0;
}
