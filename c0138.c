#include <stdio.h>

int main() {
    int num, sum=0;
    printf("���� �Է� : ");
    scanf(" %d", &num);

    for(int i=1;i<=num;i++){
        if(i%2 == 1){
            sum += i;
        }
    }
    printf("1���� %d���� Ȧ������ ���� %d �Դϴ�.",num,sum);
    return 0;
}
