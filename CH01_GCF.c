#include<stdio.h>

int GCM(int num1, int num2);

int main(void)
{
	int num1, num2;

	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);

	printf("GCM : %d \n", GCM(num1, num2));
	return 0;
}

int GCM(int num1, int num2) //���� �ۼ��� �ڵ�� �ݴ� ����
{                           //������ ���� ���� ������
	int result;
	result=num1;
	while(num1%result!=0 || num2%result!=0)
		result--;
	return result;
}