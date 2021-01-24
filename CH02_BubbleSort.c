#include <stdio.h>

void BubbleSort(int * arr, int arrlen);

main() {
    int arr[4]={3, 2, 4, 1};
    int i;

    BubbleSort(arr, sizeof(arr)/sizeof(int));
    for(i=0;i<4;i++)
        printf("%d ", arr[i]);
        
    printf("\n");
    return 0;
}

void BubbleSort(int * arr, int arrlen) {
    int i, j;
    int temp;

   for(i=0;i<arrlen-1;i++)
    for(j=0;j<(arrlen-i)-1;i++) {
        if(arr[j]>arr[j+1]) {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}