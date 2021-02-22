#include <stdio.h>

main(){
    int i=1,sum=0,num;
    printf("정수 입력:");
    scanf(" %d",&num);
    while(i++<=num){
        if(i%2==0 || i%3==0){
            sum += i;
        }
    }
    printf("총합은 :%d",sum);
    return 0;
}
