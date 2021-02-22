#include <stdio.h>
#include <string.h>

main(){
    int arr[10];
    int sum = 0;
    float avg = 0;

    for(int i =0; i<5; i++){
        printf("정수 %d번 입력:",i+1);
        scanf(" %d",&arr[i]);
        sum += arr[i];
    }
    avg = sum / strlen(arr);
    printf("\n 합계는 : %d \n평균은 %.1f",sum,avg);

    return 0;
}
