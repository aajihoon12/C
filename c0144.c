#include <stdio.h>

main(){
    int num;
    int s=0;
    printf("숫자입력:");
    scanf(" %d",&num);

    while(num > 0){
        s=s+num;
        num=num-1;
    }
    printf("총 합계:%d",s);
    return 0;
}
