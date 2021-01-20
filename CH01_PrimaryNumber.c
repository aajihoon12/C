#include <stdio.h>

main() {
    int a;
    int i;
    int cnt=0;

    a=2;
    while(cnt<10) { //소수 10개가 출력 될 때까지
        for(i=2;i<=a;i++) {
         if(a%i==0) //a를 i가 나눴는 데,
             if(a!=i) //그 값이 같지 않다면
                 break; // 소수아님
            printf("%d ", a); //break 안되면 소수
            cnt++; //소수 +1증가
        }
        a++; //a값 증가
    }
    return 0;
}