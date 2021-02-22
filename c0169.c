#include <stdio.h>

main(){
    char fruit[3][20];
    int i,j;

    for(i=0;i<3;i++){
        printf("과일이름:");
        scanf(" %s",fruit[i]);
    }

    for(j=0;j<3;j++){
        printf("%s\n",fruit[j]);
    }
    return 0;
}
