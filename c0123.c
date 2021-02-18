#include <stdio.h>

#define LEN 30

void MakeUserStorage(int ** storage, int personnel);
void UsersThrowDart(int ** storage, int * tot_score, int personnel);
int IsTargetScore(int * tot_score, int porsonnel);
void PrintUsersFScore(int * tot_score, int porsonnel);

main(){
    int * usersStorage[7]; //�����(��)�� ���� ����
    int tot_score[7]; //�����(��)�� ���� ��
    int personnel; //�ο� ��
    int i=0;
    int winner;

    printf("*** ��Ʈ ������ �����մϴ�.(1-60) ***\n");
    printf("-������ �ο� ��: "); scanf("%d", &personnel); //�ο� �� �ް�
    printf("*** TARGET SCORE 240 *** \n\n"); //���� ����

    while(i++<personnel) //�Էµ� ����� ��ŭ �����(��) ����
        MakeUserStorage(usersStorage, personnel);

    while(1) {
        if(IsTargetScore(tot_score, &personnel)) // �����(��) �� ���� Ÿ�ٰ� �Ѿ���?
            break;                               // �׷� ����
        
        UsersThrowDart(usersStorage, tot_score, personnel); // �����(��)�� dart ������
    }
    
    winner=IsTargetScore(tot_score, personnel);
    printf("***Final Winner: %d(%d) *** \n", winner, tot_score[winner-1]);
    PrintUsersFScore(tot_score, personnel);

    return 0;
}

void MakeUsersStorage(int ** storage, int personnel) {
    int * person;
    int i=0;

    while(i<personnel) { //�ο���ŭ
        person=(int *)malloc(sizeof(int) * 30);
        storage[i]=person; //int[30] array ���� �� ����

        i++;
    }
}

void UsersThrowDart(int ** storage, int * tot_score, int personnel) { //����ڵ��� ��Ʈ ���� 1ȸ
    static int idx; //�����(��)�� ��������
    int dart;
    int i=0; //�����(��) ��Ʈ��

    while(i<personnel) { //�����(��)��ŭ
       do {
            printf("USER %d. Throw the Dart please: ", i+1); scanf("%d", &dart); //��Ʈ ���� 
       }while(dart<1 || dart>60); //���� �˻�
       *(storage+i)[idx]=dart; //i�� �����
        tot_score[i]+=dart; //���� ����

        i++; //(i�� �ݺ�)
    }
    idx++; //idx�� ���� �����(��) ���� ������ ����
}

int IsTargetScore(int * tot_score, int personnel) { //���� Ÿ�� �� �Ѿ���?
    int i=0;

    while(i<personnel){ 
        if(tot_score[i]>=240) //�����(��)�� ������ ���鼭 Ÿ�� ���� �̻��� �� Ȯ���ϰ�, �׷��ٸ� (�ε���+1)�� ���!
            return i+1;

        i++;
    }
    return 0;
}

void PrintUsersFScore(int * tot_score, int personnel) { //�����(��)�� final_score !
    int i=0;

    while(i<personnel) {
        printf("USER %d���� FINAL_SCORE: %d \n", i+1, tot_score[i]);
        i++;
    }
}