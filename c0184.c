#include <string.h>
#include "c0184.h"

main() {
    char * words[] = {"messi","xabi","iniesta","busquets","alves"};
    char alpabets[] = {"abcdefghijklmnopqrstuvwxyz"}; //27
    char * underscore; //����
    int words_idx; // �ܾ� ���� idx
    int idx; // (word & ���� �迭)�� ��ü ���̰�
    int chance, boolen; //���� Ƚ���� (����, ��) ����
    char user; // ����ڰ� ������ �ܾ ��� ����

    printf("***��� ������ ���۵˴ϴ�.*** \n");
    printf("������ �ܾ� ������..... \n"); //�ð� �� ó���� �ƽ�
    words_idx=RandomIndex(); //�����ε��� ����. ��, �ܾ� ���� �Ϸ�
    idx=strlen(words[words_idx]); //�����ͺ����� �ּҰ�(�ܾ�迭�� ����Ű��)
    MakeUnderscore(underscore, idx); //���õ� �ܾ��� ���̿� �����ϰ� '_'�迭 ����

    chance=5;
    while(1) {
        if(chance <= 0)
            break;

        PrintAandU(alpabets, underscore, idx); //���ĺ��� '_'�ܾ� ���
        printf("-rest chance: %d \n", chance);
        printf("�ܾ� ����: "); scanf("%c", &user);

        boolen=CompareUserInput(underscore, words[words_idx], idx, user); //�Էµ� �ܾ�� ���� �ܾ�迭 ��
        if(boolen) { // �ϳ� �­��ٸ�
            printf("***Strike!!*** \n");
            ChangeAlpabet(alpabets, user);
        }else { //�����߸�
            printf("***ball.. Chance Minus!!*** \n");
            chance--; //���� ����
        }


        boolen=0;
        boolen=CompareUnderWord(underscore, words[words_idx], idx); //��� ���߸�
        if(boolen) { //���� ��. �¸�
            printf("***%d All Strike!! Greate!! *** \n", idx);
            break; 
        }
    }
    
    printf("GAME OVER \n");
    free(underscore);
    return 0;
}