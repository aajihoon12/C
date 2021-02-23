#include <stdio.h>

main(){
    int num1,num2;
    int hap;

    printf("첫번째 숫자:");
    scanf(" %d",&num1);
    printf("두번째 숫자:");
    scanf(" %d",&num2);
    hap = f_sum(num1,num2);
    printf("두수의 합:%d",hap);
    return 0;
}

f_sum(int num1, int num2){
    int hap;
    hap=num1+num2;
    return hap;
}
