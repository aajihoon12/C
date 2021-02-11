#ifndef __PHANDLER_H__
#define __PHANDLER_H__

#include "CH04_Phone.h"

typedef Phone * phPtr;

typedef struct {
    phPtr arr[50];
    int idx;
}PHandler;

void PHInit(PHandler * PH);
void PHPrint();
void PHInsert(PHandler * PH);
void PHDelete(PHandler * PH);
int PHCompareW(char * ph1, char * ph2);
phPtr PHSearch(PHandler * PH);
void PHShowAll(PHandler * PH);
void PHFree(PHandler * PH);
void SaveToF(PHandler * PH);
void LoadToP(PHandler * PH);

#endif