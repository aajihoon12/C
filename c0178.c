#include <stdio.h>

main(){
    int num;
    int result;

    printf("수를 입력:");
    scanf(" %d",&num);
    result=f_factorial(num);
    printf("!%d는 %d입니다.",num,result);
    return 0;
}

int f_factorial(int num){
    if(num == 0){
        return 1;
    }
    return num * f_factorial(num-1);
}

/*
int f_factorial(int num) {
    int fac=1;

    while(num>0) {
        fac*=num;
        num--;
    }
}
*/