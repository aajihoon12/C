#include <stdio.h>

int main(void) {
    int i,j;
    int dan;
    printf("����� ���� �Է��ϼ���:");
    scanf("%d",&dan);

    printf("\n%d��\n",dan);
    for(i=1;i<10;i++){
        printf("%d * %d = %d\n",dan,i,dan*i);
    }
    return 0;
}