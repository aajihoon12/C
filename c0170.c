#include <stdio.h>

main(){
    int point=100;
    int num;
    char * pContents[5] ={" ","����","����","��ȭ","��ȭ"};
    printf("��������Ʈ:%d",point);

    while(1){
        printf("0:���� 1:���� 2:���� 3:��ȭ 4:��ȭ\n");
        printf("�������� �����Ͻðڽ��ϱ�?(��ȣ ����):");
        scanf(" %d",&num);
        if(num==0){
            printf("��������");
            break;
        }else{
            if(point<=0){
                printf("����Ʈ�� �����Ͽ� �������� ������ �� ����");
                break;
            }else{
                printf("%s������ ���� �Ϸ�\n",pContents[num]);
                point=point-25;
                printf("��������Ʈ:%d\n",point);
            }
        }
    }
    return 0;
}
