#include <stdio.h>

void EmptyTheInputBuffer(FILE *fp) {
    while(fgetc(fp)!='/n') {}
}

main() {
    FILE * fp;
    char arr[24];
    int ant, pnt;

    fp=fopen("text.txt", "rt");
    if(fp==NULL) {
        printf("Fp Error");
        return -1;
    }

    ant=0, pnt=0;
    while(feof(fp)==0) {
        fscanf("%s", arr);
        if(arr[0]=='A')
            ant++;
        else if(arr[0]=='P')
            pnt++;
        EmptyTheInputBuffer(fp);
    }

    fclose(fp);
    printf("A�� �����ϴ� �ܾ��� ��: %d \n", ant);
    printf("P�� �����ϴ� �ܾ��� ��: %d \n", pnt);
    return 0;
}