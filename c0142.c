#include <stdio.h>

int main(void) {
    int i,j;
    int dan;
    printf("출력할 단을 입력하세요:");
    scanf("%d",&dan);

    printf("\n%d단\n",dan);
    for(i=1;i<10;i++){
        printf("%d * %d = %d\n",dan,i,dan*i);
    }
    return 0;
}