#include <stdio.h>

main() {
    int i;
    int num;
    int fac=1;

    printf("숫자입력:");
    scanf(" %d", &num);

    for(i=1;i<=num;i++){
        fac = fac * i;
    }
    printf("%d팩토리얼:%d",num,fac);

    return 0;
}
