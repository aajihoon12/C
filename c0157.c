#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    int dice;
    int random;

    srand(time(0));
    while(1){
        printf("1~6���� �� ���� �Է��ϼ���.");
        scanf("%d",&dice);

        random=(rand()%6+1);
        if(random == dice){
            printf("��÷�Ǿ����ϴ�.\n");
            break;
        }
        else{
            printf("��\n");
        }
    }
    return 0;
}
