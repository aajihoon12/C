#ifndef __BOOK_H__
#define __BOOK_H__

#include <stdio.h>
#define LEN 30
typedef struct {
    char author[LEN];
    char title[LEN];
    int page;
}Book;

void BInsert(Book *b) {
    printf("[���� ���� �Է�] \n");
    printf("1.����: "); scanf("%s", b->title);
    printf("2.����: "); scanf("%s", b->author);
    printf("3.������ ��: "); scanf("%d", &(b->page));
}
void ShowBookInfo(Book * b) {
    printf("[ %s, %7s, %5d ] \n\n", b->title, b->author, b->page);
}

#endif

