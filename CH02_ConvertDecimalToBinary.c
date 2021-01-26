#include <stdio.h>

int ConvertDtoB(int *arr, int num);

main() {
    int arr[32]; //4byte = 32bit
    int num;
    int cnt;
    int i;

    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    cnt=ConvertDtoB(arr, num); //배열의 길이 정보 반환
    for(i=cnt-1;i>=0;i--)
        printf("%d", arr[i]); //반대로 출력

    return 0;
}

int ConvertDtoB(int *arr, int num) {
    int cnt=0;

    while(num!=0) { //3.조건 검사
        arr[cnt++]=num&1; //1.&연산 후 cnt저장 및 증가
        num>>1; //2.bit shift 를 통한 /2
    }
    return cnt; //배열의 길이 정보 반환
}

/* 윤선생님 코드
#include<stdio.h>

int main(void)
{
	int num, cnt=0;
	char binArr[30];

	printf("10진수 정수 입력 : ");
	scanf("%d", &num);

	while(num>0)    //2진수로 변환.
	{
		binArr[cnt++]=num%2;
		num/=2;
	}
	
	while(cnt>0)    //2진수 변환 결과 출력
		printf("%d", binArr[--cnt]);

	printf("\n\n");
	return 0;
}

*/