#include <stdio.h>

void MoveVertical(int array[][4]);
void PrintArray(int array[][4]);

main() {
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int i;

    i=4;
    while(i>0) {
        PrintArray(arr);
        MoveVertical(arr);
        i--;
    }
    return 0;
}

void MoveVertical(int array[][4]) {
    int arr[4][4];
    int i,j ,k=3;

    for(i=0;i<4;i++)
        for(j=0;j<4;j++) 
            arr[i][j] = array[i][j];

    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            array[j][k]=arr[i][j];
        }
        k--;
    }     
}

void PrintArray(int array[][4]) {
    int i,j;

    for(i=0;i<4;i++) {
        for(j=0;j<4;j++)
            printf("%d ", array[i][j]);
        printf("\n");
    }
}