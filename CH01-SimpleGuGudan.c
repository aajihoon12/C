#include <stdio.h>

main() {
    int min, max, temp;
    int i, j;

    printf("구구단을 처리합니다. \n");
    prinf("두 정수를 입력: ");  scanf("%d %d", &min, &max);
    if(min>max) {
        temp=min;
        min=max;
        max=temp;
    }
    for(i=min;i<=max;i++) 
        for(j=1;j<10;j++) 
            printf("%d x %d = %d \n",i, j, i*j);
    
    return 0;
}