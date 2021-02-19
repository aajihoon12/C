/* 선택정렬 */

#include <stdio.h>

main(){
    int list1[6]={4,2,3,8,7,1};
    int i,j;
    int min_i;
    int temp;

    for(i=0;i<6;i++){
        min_i=i; //선택정렬의 준비물
        for(j=i+1;j<6;j++){
            if(list1[min_i]>list1[j]){
                min_i=j;
            }
        }
        temp=list1[min_i];
        list1[min_i]=list1[i];
        list1[i]=temp;
    }

    for(i=0;i<6;i++){
        printf(" %d",list1[i]);
    }

    return 0;
}
/* 선택정렬 */

#include <stdio.h>

main(){
    int list1[6]={4,2,3,8,7,1};
    int i,j;
    int min_i;
    int temp;

    for(i=0;i<6;i++){
        min_i=i; //선택정렬의 준비물
        for(j=i+1;j<6;j++){
            if(list1[min_i]>list1[j]){
                min_i=j;
            }
        }
        temp=list1[min_i];
        list1[min_i]=list1[i];
        list1[i]=temp;
    }

    for(i=0;i<6;i++){
        printf(" %d",list1[i]);
    }

    return 0;
}
