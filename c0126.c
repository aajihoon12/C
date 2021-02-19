#include <stdio.h>

main(){
    int ctr;
    int idSearch;
    int found=0;
    int custID[10]={313,453,502,101,892,
                    475,792,912,343,633};
    float custCard[10]={0.00,45.43,71.23,301.56,9.08,
                        192.41,389.00,229.67,18.31,59.54};

    printf("\n고객 카드 사용액 검색\n");
    printf("고객 ID 입력:");
    scanf(" %d",&idSearch);

    for(ctr=0;ctr<10;ctr++){
        if(idSearch==custID[ctr]){
            found=1;
            break;
        }
    }

    if(found==1){
        printf("\n고객의 카드 사용액 $%.2f\n",custCard[ctr]);
    }else{
        printf("잘못된 사용자  ID 입니다.\n");
    }
    return 0;
}
