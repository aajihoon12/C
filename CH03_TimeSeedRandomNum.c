#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    int cnt;

    srand((int)time(0));

    cnt=0;
    while(cnt<5) {
        printf("���� ���: %d \n", rand());
    cnt++;
    }
    return 0;
}