#ifndef __C0184_H__
#define __C0184_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomIndex() { // 0~4 사이의 임의의 값 발생 후 반환
    srand((int)time(0));

    return rand() % 5;
}

void MakeUnderscore(char * underscore, int idx) { //받은 인덱스만큼 배열 생성 후 '-' 기호 input 
    int i=0;
    underscore=(char *)malloc(1*idx+1); // 단어의 길이와 동일하게 힙에서 char 배열 할당, 다만 배열과 문자열의 null문자 처리를 잘몰라 여분으로 +1공간 추가 
                                        // 더나아가서 underscore[idx+1]='/0'(널문자)해줘야 할까..?
    while(i<idx)//단어의 길이와 동일하게 '_' 문자 입력
        underscore[i++]='_';

    underscore[idx+1]='/0';  
}

int CompareUserInput(char * underscore, char * word, int len, char user) { //유저가 입력한 단어와 배열을 비교 및 처리
    int i=0;
    int flag=0; 

    while(i<len) { //단어의 길이만큼, 단어의 길이 = '_'의 길이
        if(word[i] == user) {
            ChangeUnderScore(underscore, word, i);
            flag=1;
        }
        i++;
    }
    if(flag) //user가 값을 찾았다면
        return 1; 
    return 0; //값이 찾지 못했다면
}

int CompareUnderWord(char * underscore, char * word, int idx) {
    int i=0;

    while(i<idx) {
        if(underscore[i] != word[i])
            return 0;
    }
    return 1;
}

void ChangeUnderScore(char * underscore, char * word, int idx) { //user가 맞춘 입력값에 대해 배열 값을 변화
    underscore[idx]=word[idx]; //idx가 동일함. 따라서 같은 자리에 단어 값을 입력
}

void ChangeAlpabet(char * alpabet, char user) {
    int i=0;
    
    while(1) {
        if(alpabet[i] == user) {
            alpabet[i]='/';
            return;
        }
    }
}

void PrintAandU(char * alpabet, char * underscore, int idx) {
    int i=0;

    while(i<idx)
        printf("%c", underscore[i++]); //'-' 기호 출력.. 배열이지만, %s 안될까??
    printf("\n");

    i=0;
    while(i<26)
        printf("%c", alpabet[i++]); //마찬가지
    printf("\n");
}

#endif