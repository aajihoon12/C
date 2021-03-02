#include <stdio.h>
#include "c0187.h"

main() {
    char checkSumID[18];
    int i=0;
    int count, valid; //반복 횟수, 검증 valid

    printf("반복 횟수: "); scanf("%d", &count);
    while(i++<count) {
        printf("공백없이 id 입력: "); scanf("%s", checkSumID);
        valid=CheckingIDCode(checkSumID); //id 검증 후 1(male) 2(female) 3(invalid) 반환

        if(valid==1)
            printf("MALI \n");
        else if(valid==-1)
            printf("INVALID \n");
        else    
            printf("FEMALE \n");
    }
    return 0;
}