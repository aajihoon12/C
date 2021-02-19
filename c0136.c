#include <stdio.h>

main() {
    int x, y;
    int large, small;

    printf("정수 2개를 입력하세요:");
    scanf(" %d %d",&x,&y);

    large = x > y ? x : y;
    small = x > y ? y : x;

    printf("큰 수는 %d \n", large);
    printf("작은 수는 %d", small);

    return 0;
}
