#include <stdio.h>

main(){
    int a[100];
    int s=0;
    int i=0;
    int j;

    while(1){
        printf("숫자입력(0:끝내기,1~9:누적합계):");
        scanf(" %d",&a[i]);

        if(a[i]==0){
            break;
        }
        i=i+1; //i++
    }

    for(j=0;j<i;j++){
        s = s + a[j];
    }
    printf("합계:%d",s);

    return 0;
}
