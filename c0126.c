#include <stdio.h>

main(){
    int ctr;
    int idSearch;
    int found=0;
    int custID[10]={313,453,502,101,892,
                    475,792,912,343,633};
    float custCard[10]={0.00,45.43,71.23,301.56,9.08,
                        192.41,389.00,229.67,18.31,59.54};

    printf("\n�� ī�� ���� �˻�\n");
    printf("�� ID �Է�:");
    scanf(" %d",&idSearch);

    for(ctr=0;ctr<10;ctr++){
        if(idSearch==custID[ctr]){
            found=1;
            break;
        }
    }

    if(found==1){
        printf("\n���� ī�� ���� $%.2f\n",custCard[ctr]);
    }else{
        printf("�߸��� �����  ID �Դϴ�.\n");
    }
    return 0;
}
