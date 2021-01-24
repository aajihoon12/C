#include <stdio.h>

void DesSort(int * arr, int arrlen);

main() {
    int arr[7];
    int i;

    for(i=0;i<7;i++) {
        printf("정수 입력: ");
        scanf("%d", arr[i]);
    }

    DesSort(arr, sizeof(arr)/sizeof(int));
    for(i=0;i<7;i++)
        printf("%d ", arr[i]);    
    printf("\n");
    return 0;
}

void DesSort(int * arr, int arrlen) {
    int i, j;
    int temp;

   for(i=0;i<arrlen-1;i++)
    for(j=0;j<(arrlen-i)-1;i++) {
        if(arr[j]<arr[j+1]) { //Dscending Sort
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}