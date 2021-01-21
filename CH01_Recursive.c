#include <stdio.h>

int Power(int n)
{
	if(n==0)
		return 1;
	return Power(n-1)*2;
}

int main(void)
{	
	int num;

	printf("?? ?? : ");
	scanf("%d", &num);

	printf("2? %d?? %d \n", num, Power(num));
	return 0;;
}
