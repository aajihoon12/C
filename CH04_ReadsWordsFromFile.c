#include <stdio.h>

void EmptyTheInputBuffer(FILE *fp) {
    while(fgetc(fp)!='/n');
}

main() {
    FILE * fp;
    char arr[24];
    int ant, pnt;
    int state;

    fp=fopen("", "rt");
    if(fp==NULL) {
        printf("Fp Error");
        return 1;
    }

    ant=0, pnt=0;
    while(feof(fp)==0) {
        fscanf(fp, "%s", arr);
        
        if(arr[0]=='A' || arr[0]=='a')
            ant++;
        else if(arr[0]=='P' || arr[0]=='p')
            pnt++;

        EmptyTheInputBuffer(fp);
    }

    printf("A�� �����ϴ� �ܾ��� ��: %d \n", ant);
    printf("P�� �����ϴ� �ܾ��� ��: %d \n", pnt);
    
    state=fclose(fp);
    if(state!=0) {
        printf("fclose error \n");
        return 1;
    }
    return 0;
}