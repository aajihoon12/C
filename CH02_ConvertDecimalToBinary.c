#include <stdio.h>

int ConvertDtoB(int *arr, int num);

main() {
    int arr[32]; //4byte = 32bit
    int num;
    int cnt;
    int i;

    printf("10���� ���� �Է�: ");
    scanf("%d", &num);

    cnt=ConvertDtoB(arr, num); //�迭�� ���� ���� ��ȯ
    for(i=cnt-1;i>=0;i--)
        printf("%d", arr[i]); //�ݴ�� ���

    return 0;
}

int ConvertDtoB(int *arr, int num) {
    int cnt=0;

    while(num!=0) { //3.���� �˻�
        arr[cnt++]=num&1; //1.&���� �� cnt���� �� ����
        num>>1; //2.bit shift �� ���� /2
    }
    return cnt; //�迭�� ���� ���� ��ȯ
}

/* �������� �ڵ�
#include<stdio.h>

int main(void)
{
	int num, cnt=0;
	char binArr[30];

	printf("10���� ���� �Է� : ");
	scanf("%d", &num);

	while(num>0)    //2������ ��ȯ.
	{
		binArr[cnt++]=num%2;
		num/=2;
	}
	
	while(cnt>0)    //2���� ��ȯ ��� ���
		printf("%d", binArr[--cnt]);

	printf("\n\n");
	return 0;
}

*/