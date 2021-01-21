#include <stdio.h>

void PrintEven();
void PrintOdd();

int arr[10];

main() {
    int i;

    printf("총 10개의 숫자 입력: \n");
    for(i=0;i<sizeof(arr)/sizeof(int);i++) {
        printf("입력: ");   
        scanf("%d", &arr[i]);
    }

    PrintEven();
    PrintOdd();
    return 0;
}

void PrintEven() {
    int i;
    
    printf("홀수 출력: ");
    for(i=0;i<sizeof(arr)/sizeof(int);i++) {
        if(arr[i]%2!=0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void PrintOdd() {
    int i;

    printf("짝수 출력: ");
    for(i=0;i<sizeof(arr)/sizeof(int);i++) {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}