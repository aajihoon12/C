#include <stdio.h>

main(){
    int i=1,sum=0,num;
    printf("���� �Է�:");
    scanf(" %d",&num);
    while(i++<=num){
        if(i%2==0 || i%3==0){
            sum += i;
        }
    }
    printf("������ :%d",sum);
    return 0;
}
