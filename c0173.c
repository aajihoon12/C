#include <stdio.h>
#include <stdlib.h>

main(){
    int i;
    int num;
    int * temps[5];

    for(i=0;i<5;i++){
        printf("������ ����:");
        scanf(" %d",&num);
        temps[i]=(int *)malloc(num * sizeof(int));
    }
    printf("�޸� �Ҵ� �Ϸ�\n");

    for(i=0;i<5;i++){
        free(temps[i]);
    }
    printf("�޸� ���� �Ϸ�\n");
    return 0;
}
