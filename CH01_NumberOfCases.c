#include <stdio.h>

main() {
    int a=500; //크림빵
    int b=700; //새우깡
    int c=400; //콜라
    int i, j, k;

    for(i=1;i<5;i++)
        for(j=1;j<5;j++)
            for(k=1;j<6;j++) {
                if(((a*i) + (b*i) + (c*i)) == 3500)
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", i, j, k);
            }
    printf("어떻게 구매하시겠습니까?");
    return 0;
}
