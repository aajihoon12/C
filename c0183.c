#include <stdio.h>
#include "c0183.h"

main(){
    int a,b,cal;
    int result;
    float result2;
    printf("첫번째 숫자 입력:");
    scanf(" %d",&a);
    printf("두번째 숫자 입력:");
    scanf(" %d",&b);
    printf("번호입력(1:더하기 2:빼기 3:곱하기 4:나누기)");
    scanf(" %d",&cal);

    if(cal==1){
        result=f_plus(a,b);
        printf("%d+%d=%d",a,b,result);
    }else if(cal==2){
        result=f_minus(a,b);
        printf("%d-%d=%d",a,b,result);
    }else if(cal==3){
        result=f_multiply(a,b);
        printf("%d*%d=%d",a,b,result);
    }else{
        result2=f_divide(a,b);
        printf("%d/%d=%.2f",a,b,result2);
    }
    return 0;
}
