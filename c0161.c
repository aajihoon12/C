#include <stdio.h>
#include <string.h>

main(){
    int arr[10];
    int sum = 0;
    float avg = 0;

    for(int i =0; i<5; i++){
        printf("���� %d�� �Է�:",i+1);
        scanf(" %d",&arr[i]);
        sum += arr[i];
    }
    avg = sum / strlen(arr);
    printf("\n �հ�� : %d \n����� %.1f",sum,avg);

    return 0;
}
