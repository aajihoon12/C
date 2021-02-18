#include <stdio.h>

#define LEN 30

void MakeUserStorage(int ** storage, int personnel);
void UsersThrowDart(int ** storage, int * tot_score, int personnel);
int IsTargetScore(int * tot_score, int porsonnel);
void PrintUsersFScore(int * tot_score, int porsonnel);

main(){
    int * usersStorage[7]; //사용자(들)의 저장 공간
    int tot_score[7]; //사용자(들)의 점수 값
    int personnel; //인원 수
    int i=0;
    int winner;

    printf("*** 다트 게임을 시작합니다.(1-60) ***\n");
    printf("-참여할 인원 수: "); scanf("%d", &personnel); //인원 수 받고
    printf("*** TARGET SCORE 240 *** \n\n"); //게임 시작

    while(i++<personnel) //입력된 사용자 만큼 사용자(들) 생성
        MakeUserStorage(usersStorage, personnel);

    while(1) {
        if(IsTargetScore(tot_score, &personnel)) // 사용자(들) 중 누가 타겟값 넘었어?
            break;                               // 그럼 종료
        
        UsersThrowDart(usersStorage, tot_score, personnel); // 사용자(들)의 dart 던지기
    }
    
    winner=IsTargetScore(tot_score, personnel);
    printf("***Final Winner: %d(%d) *** \n", winner, tot_score[winner-1]);
    PrintUsersFScore(tot_score, personnel);

    return 0;
}

void MakeUsersStorage(int ** storage, int personnel) {
    int * person;
    int i=0;

    while(i<personnel) { //인원만큼
        person=(int *)malloc(sizeof(int) * 30);
        storage[i]=person; //int[30] array 생성 및 저장

        i++;
    }
}

void UsersThrowDart(int ** storage, int * tot_score, int personnel) { //사용자들의 다트 던짐 1회
    static int idx; //사용자(만)의 점수누적
    int dart;
    int i=0; //사용자(들) 컨트롤

    while(i<personnel) { //사용자(들)만큼
       do {
            printf("USER %d. Throw the Dart please: ", i+1); scanf("%d", &dart); //다트 던짐 
       }while(dart<1 || dart>60); //오류 검사
       *(storage+i)[idx]=dart; //i는 사용자
        tot_score[i]+=dart; //총합 누적

        i++; //(i는 반복)
    }
    idx++; //idx는 다음 사용자(만) 점수 누적을 위함
}

int IsTargetScore(int * tot_score, int personnel) { //누가 타겟 값 넘었어?
    int i=0;

    while(i<personnel){ 
        if(tot_score[i]>=240) //사용자(들)의 점수를 돌면서 타겟 점수 이상인 지 확인하고, 그렇다면 (인덱스+1)값 출력!
            return i+1;

        i++;
    }
    return 0;
}

void PrintUsersFScore(int * tot_score, int personnel) { //사용자(들)의 final_score !
    int i=0;

    while(i<personnel) {
        printf("USER %d님의 FINAL_SCORE: %d \n", i+1, tot_score[i]);
        i++;
    }
}