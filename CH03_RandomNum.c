#include <stdio.h>
#include <stdlib.h>

main() {
    int cnt;

    printf("0���� %d������ ���� ��� \n", RAND_MAX);
    cnt=0;
    while(cnt<5) {
        printf("%d��° ����: %d \n", cnt+1, rand());
        cnt++;
    }

    printf("0 �̻� 99������ ���� 5�� ��� \n");
    cnt=0;
    while(cnt<5) {
        printf("%d��° ����: %d \n", cnt+1, (rand()%100));
        cnt++;
    }
    return 0;
}