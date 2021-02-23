#ifndef __C0184_H__
#define __C0184_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomIndex() { // 0~4 ������ ������ �� �߻� �� ��ȯ
    srand((int)time(0));

    return rand() % 5;
}

void MakeUnderscore(char * underscore, int idx) { //���� �ε�����ŭ �迭 ���� �� '-' ��ȣ input 
    int i=0;
    underscore=(char *)malloc(1*idx+1); // �ܾ��� ���̿� �����ϰ� ������ char �迭 �Ҵ�, �ٸ� �迭�� ���ڿ��� null���� ó���� �߸��� �������� +1���� �߰� 
                                        // �����ư��� underscore[idx+1]='/0'(�ι���)����� �ұ�..?
    while(i<idx)//�ܾ��� ���̿� �����ϰ� '_' ���� �Է�
        underscore[i++]='_';

    underscore[idx+1]='/0';  
}

int CompareUserInput(char * underscore, char * word, int len, char user) { //������ �Է��� �ܾ�� �迭�� �� �� ó��
    int i=0;
    int flag=0; 

    while(i<len) { //�ܾ��� ���̸�ŭ, �ܾ��� ���� = '_'�� ����
        if(word[i] == user) {
            ChangeUnderScore(underscore, word, i);
            flag=1;
        }
        i++;
    }
    if(flag) //user�� ���� ã�Ҵٸ�
        return 1; 
    return 0; //���� ã�� ���ߴٸ�
}

int CompareUnderWord(char * underscore, char * word, int idx) {
    int i=0;

    while(i<idx) {
        if(underscore[i] != word[i])
            return 0;
    }
    return 1;
}

void ChangeUnderScore(char * underscore, char * word, int idx) { //user�� ���� �Է°��� ���� �迭 ���� ��ȭ
    underscore[idx]=word[idx]; //idx�� ������. ���� ���� �ڸ��� �ܾ� ���� �Է�
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
        printf("%c", underscore[i++]); //'-' ��ȣ ���.. �迭������, %s �ȵɱ�??
    printf("\n");

    i=0;
    while(i<26)
        printf("%c", alpabet[i++]); //��������
    printf("\n");
}

#endif