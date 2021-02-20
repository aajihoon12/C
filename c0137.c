#include <stdio.h>

int main() {
    int sum = 0;

    for(int i=1;i<=10;i++){
        if(!(i % 2) ){ // if((i % 2)==0)
            sum += i;
        }
    }
    printf("1부터 10까지 짝수들의 합은 %d\n", sum);

    return 0;
}