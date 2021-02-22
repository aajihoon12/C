#include <stdio.h>
#include <math.h> //수학 관련 헤더, 제품

main() {
    int num1=-25;
    float num2=-25.0;

    printf("-25의 절대값:%d\n",abs(num1));
    printf("-25.0의 절대값:%.1f\n",fabs(num2));
    printf("10의 3승:%.0f\n",pow(10,3));
    printf("64의 제곱근:%.0f",sqrt(64));

    return 0;
}
