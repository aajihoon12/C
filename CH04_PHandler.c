#include "CH04_PHandler.h"
#include <stdlib.h>

void PHInit(PHandler * PH) {
    PH->idx=0;
}

void PHPrint() {
    printf("***** MENU *****\n");
    printf("1. Insert \n");
    printf("2. Delete \n");
    printf("3. Search \n");
    printf("4. Print All \n");
    printf("5. Exit \n");
    printf("\n");
}

void PHInsert(PHandler * PH) {
    phPtr ph = (phPtr)malloc(sizeof(Phone));
    PInsert(ph);
    
    PH->arr[PH->idx++] = ph;
}

/*
int PHCompareW(char * ph1, char * ph2) {
    int i=0;

    while(1) { 
        if(ph1[i] != ph2[i])
            return 0;
        if(ph1[i] == '\0') //null?
            break;
        i++;
    }
    return 1;
}
*/

int PHSearch(PHandler * PH) {
    int i=0;
    char number[20];

    printf("[ SEARCH ] \n");
    printf("Phone Number : "); scanf("%s", number);   

    while(i<PH->idx) {
        if(strcmp(PH->arr[i]->number, number) == 0) {
            ShowPH(PH->arr);
            printf("\n");
            return i;
        }
        i++;
    }
    printf("Can't Find \n\n");
    return 0;
}

void PHDelete(PHandler * PH) {
    int i;
    int idx;

    if(idx=PHSearch(PH))
        free(PH->arr[idx]);
    else{
        printf("적합한 대상을 찾지 못했습니다. \n\n");
        return;
    }
    
    i=idx;
    while(i+1<PH->idx) { //배열 이해 부족
        PH->arr[i-1]=PH->arr[i];
    }
    PH->idx--;
}

void ShowAll(PHandler * PH) {
    int i=0;
    
    while(i<PH->idx) {
        ShowPH(PH->arr[i]);
        i++;
    }
}

void PHFree(PHandler * PH) {
    int i=PH->idx;

    while(i>0) {
        i--;
        free(PH->arr[i]);
    }
}

int SaveToF(PHandler * PH) {
    FILE * fp;
    int i=0;
    int writeCnt;

    fp=fopen("", "wb");
    if(fp==NULL)
        return -1;
    
    while(i<PH->idx) {
        writeCnt=fwrite((void*)PH->arr[i], sizeof(*(PH->arr[i])), 1, fp);
        if(writeCnt<1) {
            printf("error: %d번 부터 데이터 저장 실패 \n", i+1);
            fclose(fp);
            return -1;
        }
    }
    printf("데이터 저장 완료 \n\n");
    fclose(fp);
}

int LoadToP(PHandler * PH) {
    FILE * fp;
    int i=0;
    int readCnt;

    fp=fopen("", "rb");
    if(fp==NULL)
        return -1;

    while(i<PH->idx) {
        readCnt=fread((void*)PH->arr[i], sizeof(*(PH->arr[i])), 1, fp);
        if(readCnt<1) {
            printf("error: %d번 부터 데이터 불러오기 실패 \n\n\n", i+1);
            fclose(fp);
            return -1;
        }
    }
    fclose(fp);
}
