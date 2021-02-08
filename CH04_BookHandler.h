#ifndef _BOOK_HANDLER_H__
#define _BOOK_HANDLER_H__

#include "CH04_Book.h"
#include <stdio.h>
#include <stdlib.h>

typedef Book* BookPtr;

typedef struct {
    BookPtr arr[100];
    int idx;
}BookHandler;

typedef BookHandler BH;

void BHInit(BH * bh) {
    bh->idx=0;
}
void BHInsert(BH * bh) {
    BookPtr book;

    book=(Book*)malloc(sizeof(Book));
    BookInit(book); BInsert(book);
    bh->arr[bh->idx++]=book;
}

void ShowAllInfo(BH* bh) {
    int i;
    
    for(i=0;i<bh->idx;i++)
        ShowBookInfo(bh->arr[i]);
}

void DestroyMemory(BH* bh) {
    int i=(bh->idx);

    while(i>0){
        i--;
        free(bh->arr[i]);
    }
}

#endif