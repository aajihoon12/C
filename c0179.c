#include <stdio.h>

int half(int i);

main(){
    int i;
    int half;

    printf("���� �Է�:");
    scanf(" %d",&i);
    half = half(i);
    printf("%d",i);
    return 0;
}

half(int i){
    i=i/2;
    return i;
}
