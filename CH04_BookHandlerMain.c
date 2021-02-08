#include <CH04_BookHandler.h>

main() {
    BookHandler bh;
    int i=3;

    BHInit(&bh);
    while(i>0) {
        BHInsert(&bh);
        i--;
    }
    ShowAllInfo(&bh);
    DestroyMemory(&bh);
    return 0;
}