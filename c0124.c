#include <stdio.h>

main(){
    int c_input[9];
    int i;
    int max_i;
    int temp;

    for(i=0;i<9;i++){
        printf("100미만의 자연수 입력:");
        scanf(" %d",&c_input[i]);
    }

    max_i=c_input[0];
    for(i=0;i<9;i++){
        if(max_i<c_input[i]){
            max_i=c_input[i];
            temp=i;
        }
    }

    printf("%d\n",c_input[temp]);
    printf("%d",temp+1);

    return 0;
}
