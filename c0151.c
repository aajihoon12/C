#include <stdio.h>

void BubbleSort(int * arr, int len);

main() {
    int arr[5];
    int i=0;

    printf("*5명의 점수입력 \n");
    while(i<5) {
        printf("%d번 점수: ", i+1); scanf("%d", &arr[i]);
    }
    BubbleSort(arr, sizeof(arr)/4 );

    i=0;
    while(i<5) 
        printf("%d등: %d점 \n", i+1, arr[i++]); 

}

void BubbleSort(int * arr, int len) {
    int i=0,j=0;
    int temp;

    while(i<len-1) {
        while(j<(len-i)-1) {
             if(arr[j]<arr[j+1]) {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
                j++;
            }
        }
        i++;
    }

}