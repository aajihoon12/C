#include <stdio.h>

main() {
    int arr[5];
    int i=0;
    int sum=0;

    printf("5과목의 합과 평균 \n");
    while(i<5) {
        printf("%d. 과목: "); scanf("%d", &arr[i]);
        sum += arr[i];
        i++;
    }
    printf("%d과목의 합계: %d, 평균: %.2f \n", i, sum, sum/5.0);
    return 0;
}