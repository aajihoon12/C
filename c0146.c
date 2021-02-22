#include <stdio.h>

main(){
    int num=0;
    int s=0;

    while(1){
        num=num+1;
        s=s+num;
        if(s>=50){
            break;
        }
    }
    printf("1에서 %d까지의 합:%d",num,s);

    return 0;
}
