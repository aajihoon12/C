#include <stdio.h>

main(){
    int num;
    int count=0;
    int s=0;

    while(1){
        printf("숫자 입력(0:끝내기, 1~9:숫자 더함):");
        scanf(" %d",&num);
        if(num==0){
            break;
        }
        s=s+num;
        count=count+1;
    }
    printf("%d번 더한 합:%d",count,s);

    return 0;
}
