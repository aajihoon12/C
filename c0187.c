#include <stdio.h>
#include "c0187.h"

main() {
    char checkSumID[18];
    int i=0;
    int count, valid; //�ݺ� Ƚ��, ���� valid

    printf("�ݺ� Ƚ��: "); scanf("%d", &count);
    while(i++<count) {
        printf("������� id �Է�: "); scanf("%s", checkSumID);
        valid=CheckingIDCode(checkSumID); //id ���� �� 1(male) 2(female) 3(invalid) ��ȯ

        if(valid==1)
            printf("MALI \n");
        else if(valid==-1)
            printf("INVALID \n");
        else    
            printf("FEMALE \n");
    }
    return 0;
}