#ifndef __PHONE_H__
#define __PHONE_H__

#include <stdio.h>

#define NAME_LEN 20
#define NUMBER_LEN 20

typedef struct {
    char name[NAME_LEN];
    char number[NUMBER_LEN];
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

