#include <stdio.h>

//void MakeArrayOfSnail(int arr[][]); //MakeAnArrayOfSnail-shaped .. �� 2���� �迭�� �������� �ʱ���

main() {
    int arr[50][50];
    int n, repo;
    int row=0, col=-1;
    int ict=1;
    int num=0;
    int i=0, j=0;

    printf("���ڸ� �Է��Ͻÿ�: "); scanf("%d", &n);
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