#include <stdio.h>

void PrintEven(int *arr);
void PrintOdd(int *arr);

main() {
    int i;
    int arr[10];

    printf("�� 10���� ���� �Է�: \n");
    for(i=0;i<sizeof(arr)/sizeof(int);i++) {
        printf("�Է�: ");
        scanf("%d", &arr[i]);
    }

    PrintEven(arr);
    PrintOdd(arr);
    return 0;
}

void PrintEven(int *arr) {
    int i;
    
    printf("Ȧ�� ���: ");
    for(i=0;i<sizeof(arr)/sizeof(int);i++) {
        if(arr[i]%2!=0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void PrintOdd(int *arr) {
    int i;

    printf("¦�� ���: ");
    for(i=0;i<sizeof(arr)/sizeof(int);i++) {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}