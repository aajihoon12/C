#include <stdio.h>
#include <stdlib.h>

main(){
    int count,i,num;
    int * p; // pointer

    printf("���� ���� �Է�:");
    scanf(" %d",&count); //����ڿ��� ���� �޾Ƽ�,
    p = (int *)malloc(count * sizeof(int));  //�迭�� �����ϰ� ����
    if(!p){
        printf("�޸� �Ҵ� ����\n");
        exit(1);
    }

    for(i=0;i<count;i++){
        printf("���� �Է�:");
        scanf(" %d",&num);
        p[i]=num;
    }

    printf("�Էµ� ������:");
    for(i=0;i<count;i++){
        printf("%d ",p[i]);
    }
    free(p); //���������� ����
    return 0;
}
