#include <stdio.h>

main(){
    int vals[5]={10,20,30,40,50};

    printf("첫번째 값:%d\n",vals[0]);
    printf("첫번째 값:%d\n",*vals);

    printf("세번째 값:%d\n",vals[2]);
    printf("세번째 값:%d\n",*(vals+2));

    return 0;
}
