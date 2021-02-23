#include <stdio.h>

main(){
    int a=10,b=20;
    swap(&a,&b);
    printf("a=%d, b=%d",a,b);
    return 0;
}

swap(int * a,int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
