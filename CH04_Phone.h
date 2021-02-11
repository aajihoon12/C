#ifndef __PHONE_H__
#define __PHONE_H__

#include <stdio.h>

typedef struct {
    char name[10];
    char number[20];
}Phone;


void PInsert(Phone * ph) {
    printf("[ INSERT ] \n");
    printf("1.Input Name : "); scanf("%s", ph->name);
    printf("2.Input Tel Numvber : "); scanf("%s", ph->number);
    printf("/t/t Data Inserted");
    printf("\n");
}

void ShowPH(Phone * ph) {
    printf("[이름: 6%s, 번호: 10%s \n", ph->name, ph->number);
}

#endif

