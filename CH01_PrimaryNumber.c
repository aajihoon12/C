#include <stdio.h>

main() {
    int a;
    int i;
    int cnt=0;

    a=2;
    while(cnt<10) { //�Ҽ� 10���� ��� �� ������
        for(i=2;i<=a;i++) {
         if(a%i==0) //a�� i�� ������ ��,
             if(a!=i) //�� ���� ���� �ʴٸ�
                 break; // �Ҽ��ƴ�
            printf("%d ", a); //break �ȵǸ� �Ҽ�
            cnt++; //�Ҽ� +1����
        }
        a++; //a�� ����
    }
    return 0;
}