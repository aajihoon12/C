#include <stdio.h>

main() {
    int arr[10];
    int num;
    //int cnt1 = 0, cnt2 = 10;
    int i;

    for(i=0;i<10;i++) {
        printf("���� 10�� �Է�: ");
        scanf("%d", &num);

        if(num%2==0)
            arr[9-i]=num;
        else   
            arr[i]=num;
    }
    for(i=0;i<10;i++)
        printf("%d ", arr[i]);
    return 0;
}