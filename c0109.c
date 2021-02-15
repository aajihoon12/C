#include <stdio.h>

main() {
    float horizontal; //수평
    float vertical; //수직
    float area;

    printf("직사각형의 가로 입력: ");
    scanf("%f", &horizontal);

    printf("직사각형의 세로 입력: ");
    scanf("%f", &vertical);

    area=horizontal * vertical;
    printf("area : %.2f \n", area);
    return 0;
}