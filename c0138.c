#include <stdio.h>

int main() {
    int num, sum=0;
    printf("정수 입력 : ");
    scanf(" %d", &num);

    for(int i=1;i<=num;i++){
        if(i%2 == 1){
            sum += i;
        }
    }
    printf("1부터 %d까지 홀수들의 합은 %d 입니다.",num,sum);
    return 0;
}
