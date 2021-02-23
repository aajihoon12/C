/* static변수를 함수 내부에 선언하면 함수가 여러번 실행되더라도
   변수의 선언 및 초기화는 한번만 이루어진다. */

#include <stdio.h>

float loop1(int a);
float loop2(int b);

main(){
    int a=3;
    int b=3;
    float result,result2;

    result=loop1(a);
    printf("%.1f\n",result);
    result2=loop2(b);
    printf("%.1f\n",result2);

    result=loop1(a);
    printf("%.1f\n",result);
    result2=loop2(b);
    printf("%.1f\n",result2);

    return 0;
}

float loop1(int a){
    float result;
    static int i = 0;
    i=i+a;
    result=i*0.5;
    return result;
}

float loop2(int b){
    float result2;
    int j = 0;
    j=j+b;
    result2=j*0.5;
    return result2;
}
