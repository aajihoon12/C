#include <stdio.h>

main() {
    int arr[5];
    int i=0;
    int sum=0;

    printf("5������ �հ� ��� \n");
    while(i<5) {
        printf("%d. ����: "); scanf("%d", &arr[i]);
        sum += arr[i];
        i++;
    }
    printf("%d������ �հ�: %d, ���: %.2f \n", i, sum, sum/5.0);
    return 0;
}