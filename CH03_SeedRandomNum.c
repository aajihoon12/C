#include <stdio.h>
#include <stdlib.h>

main() {
    int cnt;
    int seed;

    printf("������ ���� ������ ���õ� ���尪: ");
    scanf("%d", &seed);
    srand(seed);

    cnt=0;
    while(cnt<5) {
        printf("���� ���: %d \n", rand());
    cnt++;
    }
    return 0;
}