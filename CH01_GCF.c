#include <stdio.h>

main() {
    int a, b, c;
    int temp;
    int i;

    printf("�ִ� ������� ���� a, b �Է�: ");
    scanf("%d %d", &a, &b);
    if(a<b) { // �� ���� ���� ���� ã��
        temp=a;
        a=b;
        b=temp;
    }
    for(i=1;i<=a;i++)
        if(!(a%i) && !(b%i)) //�� �� ������ ���� �߸���
            c=i;

    printf("%d, %d�� �ִ� �����: %d ", a, b, c);
    return 0;
}