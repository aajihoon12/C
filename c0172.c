//���� �޸�: ���� ������ ���� �޸�
//          ���α׷����� �ʿ��� ��ŭ�� �޸𸮸� ����� �� �ְ� ��
//          malloc()�Լ�: �����޸� �Ҵ�
//          free()�Լ�: �����޸� �ݳ�
#include <stdio.h>
#include <stdlib.h>

main(){
    int * temps;

    temps =(int *)malloc(10 * sizeof(int));
    if(temps==0){
        printf("����� �޸𸮰� ����\n");
        exit(1);
    }else{
        printf("�޸� �Ҵ�\n");
    }
    free(temps);
    printf("�޸� ����\n");
    return 0;
}
