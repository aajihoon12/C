#include "CH04_PHandler.h"

enum { INSERT=1, DELETE, SEARCH, PRINT_ALL, EXIT };

main() {
    PHandler PH;
    int choice;

    PHInit(&PH);
    LoadToP(&PH);
    while(1) {
        PHPrint();
        printf("Choose the item: "); scanf("%d", &choice);

        switch(choice) {
        case INSERT:
            PHInsert(&PH);
            break;
        case DELETE:
            PHDelete(&PH);
            break;
        case SEARCH:
            PHSearch(&PH);
            break;
        case PRINT_ALL:
            PHShowAll(&PH);
            break;
        case EXIT:
            SaveToF(&PH);
            PHFree(&PH);
            printf("프로그램 종료 \n");
            return 0;
        default:
            printf("Wrong Input");
        }
    }
    return 0;
}