#include <stdio.h>

main() {
    char data[]={0,0,2,0,1,1,0,0,2,1,0,2,};
    int i, row, col;

    for(i=0;i<12;i++) {
        row=i/4 + 1; //get row
        col=i%4 + 1; //get col

        printf("%d행 %d열에 ", row, col);
        if(data[i]==1) printf("검은 돌이 놓여 있습니다 \n");
        else if(data[i]==2) printf("흰 돌이 놓여 있습니다 \n");
        else printf(" 는 돌이 놓여 있지 않습니다. \n");
    }
    return 0;
}