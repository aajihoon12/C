#include<stdio.h>

int IsPrime(int n);

int main(void) //main은 for문이 들어가지않음
{
	int i=2, cnt=0;

	while(cnt!=10)
	{
		if(IsPrime(i)==1)
		{
			printf("%d ", i);
			cnt++;
		}
		i++;
	}
	return 0;
}

int IsPrime(int n)	   // 소수면 true(1) 리턴
{
	int divisors=0, i;
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
			divisors++; //소수라면 반드시 2의 값 적재
	}

	if(divisors==2)
		return 1;

	return 0;
}
