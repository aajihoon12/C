#include <stdio.h>

void PrintEven();
void PrintOdd();

int arr[10];

main() {
    int i;

    printf("�� 10���� ���� �Է�: \n");
    for(i=0;i<sizeof(arr)/sizeof(int);i++) {
        printf("�Է�: ");   
        scanf("%d", &arr[i]);
    }

    PrintEven();
    PrintOdd();
    return 0;
}

void PrintEven() {
    int i;
    
    printf("Ȧ�� ���: ");
    for(i=0;i<sizeof(arr)/sizeof(int);i++) {
        if(arr[i]%2!=0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void PrintOdd() {
    int i;

    printf("¦�� ���: ");
    for(i=0;i<sizeof(arr)/sizeof(int);i++) {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}