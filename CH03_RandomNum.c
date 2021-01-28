#include <stdio.h>
#include <stdlib.h>

main() {
    int cnt;

    printf("0부터 %d사이의 난수 출력 \n", RAND_MAX);
    cnt=0;
    while(cnt<5) {
        printf("%d번째 난수: %d \n", cnt+1, rand());
        cnt++;
    }

    printf("0 이상 99이하의 난수 5개 출력 \n");
    cnt=0;
    while(cnt<5) {
        printf("%d번째 난수: %d \n", cnt+1, (rand()%100));
        cnt++;
    }
    return 0;
}