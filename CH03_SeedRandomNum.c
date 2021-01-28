#include <stdio.h>
#include <stdlib.h>

main() {
    int cnt;
    int seed;

    printf("임의적 난수 생성과 관련된 씨드값: ");
    scanf("%d", &seed);
    srand(seed);

    cnt=0;
    while(cnt<5) {
        printf("난수 출력: %d \n", rand());
    cnt++;
    }
    return 0;
}