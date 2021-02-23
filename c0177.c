#include <stdio.h>

main(){
    int num;
    int tot;

    printf("정수의 합:");
    scanf(" %d",&num);
    tot =f_sum(num);
    return 0;
}

int f_sum(int num){
    int tot=0;
	while (num>0) { //error -> fix
		tot = tot + num;
		num--;
	}
    return tot;
}
