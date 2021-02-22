#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    int a[5]={3,7,9,15,21};
    int r1,r2;
    srand(time(0));

    r1=rand()%5;
    r2=a[r1];
    printf("%d\n",r2);

    return 0;
}
