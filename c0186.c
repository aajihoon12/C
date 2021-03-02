//»ğÀÔÁ¤·Ä

#include <stdio.h>

main() {
    int list[] = {4,3,5,2,1,7};
    int i,j;
    int value;

    for(i=1;i<6;i++) {
        if(list[i-1]<=list[i])
            continue;
        value=list[i];

        for(j=0;j<i;j++) 
            if(list[j]>value) {
                memmove(&list[j+1], &list[j], sizeof(int)*(i-j));
                list[j]=value;
                break;
            }   
    }

    for(i=0;i<6;i++)
        printf("%d ", list[i]);
    return 0;
}