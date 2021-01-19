#include <stdio.h>

main() {
    int n; //자연수 n
    int k=0;
    int num=1;

    printf("2(의 제급k)<=n을 만족할 자연수 n : ");
    scanf("%d", &n);

    while(1) {
        if(num<=n) { //k가 하나 증가할 때마다, num은 2씩 곱해진다.
            k++;
            num*=2;
        }else   
            break;
    }
    printf("k: %d", k-1);
}