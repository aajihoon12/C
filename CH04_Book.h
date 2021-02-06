#ifndef __BOOK_H__
#define __BOOK_H__

#include <stdio.h>

typedef struct {
    char * name;
    char * author;
    int page;
}Book;

void BookInit(Book *b) {
    b->name=0;
    b->author=0;
    b->page=0;
}
void BInsert(Book *b) {
    printf("[���� ���� �Է�] \n");
    printf("1.����: "); scanf("%s", b->name);
    printf("2.����: "); scanf("%s", b->author);
    printf("3.������ ��: "); scanf("%d", &(b->page));
}
void ShowBookInfo(Book * b) {
    printf("[ %s, %7s, %5d ] \n\n", b->name, b->author, b->page);
}

#endif

