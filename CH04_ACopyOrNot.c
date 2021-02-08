#include <stdio.h>

int IsTheSame(int r1, int r2, char * arr1, char * arr2);

main() {
    FILE * fp1;
    FILE * fp2;
    char arr1[20];
    char arr2[20];
    int readcnt1, readcnt2;

    fp1=fopen("","rb");
    fp2=fpoen("","rb");

    while(1) {
        readcnt1=fread((void*)arr1, 1, sizeof(arr1), fp1);
        readcnt2=fread((void*)arr2, 1, sizeof(arr2), fp2);

        if(readcnt1<sizeof(arr1)) {
            if(feof(fp1)!=0) {
                if(IsTheSame(readcnt1, readcnt2, arr1, arr2)!=1) {
                    printf("Not a Copy \n");
                    fclose(fp1);
                    fclose(fp2);
                    return 0;
                }
                break;

            }else {
                printf("error! \n");
                return -1;
            }
        }

        if(IsTheSame(readcnt1, readcnt2, arr1, arr2)!=1) {
            printf("Not a Copy \n");
            fclose(fp1);
            fclose(fp2);
            return 0;
        }
    }
    fclose(fp1);
    fclose(fp2);
    printf("2개의 파일은 완전히 일치합니다. \n");
    return 0;
}

int IsTheSame(int r1, int r2, char * arr1, char * arr2){ 
    int i=r1;

    if(r1!=r2)
        return 0;

    while(i>0) {
        i--;
        if(arr1[i]!=arr2[i])
            return 0;
    }
    return 1;
}