#include <stdio.h>

int ConvertDtoB(int *arr, int num);

main() {
    int arr[32];
    int num;
    int cnt;
    int i;

    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    cnt=ConvertDtoB(arr, num);
    for(i=cnt-1;i>=0;i--)
        printf("%d", arr[i]);

    return 0;
}

int ConvertDtoB(int *arr, int num) {
    int cnt=0;

    while(num!=0) {
        arr[cnt++]=num&1;
        num>>1;
    }
    return cnt;
}