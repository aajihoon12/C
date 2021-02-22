#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    int dice;
    int random;

    srand(time(0));
    while(1){
        printf("1~6까지 한 수를 입력하세요.");
        scanf("%d",&dice);

        random=(rand()%6+1);
        if(random == dice){
            printf("당첨되었습니다.\n");
            break;
        }
        else{
            printf("꽝\n");
        }
    }
    return 0;
}
