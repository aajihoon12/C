#include <stdio.h>

main() {
    int a=500; //ũ����
    int b=700; //�����
    int c=400; //�ݶ�
    int i, j, k;

    for(i=1;i<5;i++)
        for(j=1;j<5;j++)
            for(k=1;j<6;j++) {
                if(((a*i) + (b*i) + (c*i)) == 3500)
                    printf("ũ���� %d��, ����� %d��, �ݶ� %d�� \n", i, j, k);
            }
    printf("��� �����Ͻðڽ��ϱ�?");
    return 0;
}
