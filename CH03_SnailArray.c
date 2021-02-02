#include <stdio.h>

//void MakeArrayOfSnail(int arr[][]); //MakeAnArrayOfSnail-shaped .. 아 2차원 배열은 유연하지 않구나

main() {
    int arr[50][50];
    int n, repo;
    int row=0, col=-1;
    int ict=1;
    int num=0;
    int i=0, j=0;

    printf("숫자를 입력하시오: "); scanf("%d", &n);
    repo=n;

    while(1) {
        if(num==n*n)
            break;
        i=0;
        while(i<n) {
            num++;
            col+=ict;
            arr[row][col]=num;
        }
        n--;
        i=0;
        while(i<n) {
            num++;
            row+=ict;
            arr[row][col]=num;
        }
        ict*=-1;
    }
    i=0;
    while(i<repo) {
        while(j<repo) {
            printf("%d", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}