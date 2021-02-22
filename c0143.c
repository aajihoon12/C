#include <stdio.h>

main() {
    int i;
    int money;
    int year;
    float interest_rate;

    printf("원금 입력:");
    scanf(" %d",&money);
    printf("연 입력:");
    scanf(" %d",&year);
    printf("연 이율(%%) 입력:");
    scanf(" %f",&interest_rate);

    for(i=1;i<=year;i++){
        money = money + (money *(interest_rate / 100));
        printf("%d년 후 금액은:%d\n",i,money);
    }
    printf("세전 찾을 총 금액은:%d",money);
    return 0;
}
