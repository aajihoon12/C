#include <stdio.h>

main() {
    int n; //�ڿ��� n
    int k=0;
    int num=1;

    printf("2(�� ����k)<=n�� ������ �ڿ��� n : ");
    scanf("%d", &n);

    while(1) {
        if(num<=n) { //k�� �ϳ� ������ ������, num�� 2�� ��������.
            k++;
            num*=2;
        }else   
            break;
    }
    printf("k: %d", k-1);
}