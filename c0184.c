#include <string.h>
#include "c0184.h"

main() {
    char * words[] = {"messi","xabi","iniesta","busquets","alves"};
    char alpabets[] = {"abcdefghijklmnopqrstuvwxyz"}; //26
    char * underscore; //밑줄
    int words_idx; // 단어 선택 idx
    int idx; // (word & 밑줄 배열)의 전체 길이값
    int chance, boolen; //찬스 횟수와 (거짓, 참) 변수
    char user; // 사용자가 선택한 단어를 담는 상자

    printf("***행맨 게임이 시작됩니다.*** \n");
    printf("임의의 단어 선택중..... \n"); //시간 차 처리가 아쉽
    words_idx=RandomIndex(); //랜덤인덱스 꺼냄. 즉, 단어 선택 완료
    idx=strlen(words[words_idx]); //포인터변수의 주소값(단어배열을 가르키는)
    MakeUnderscore(underscore, idx); //선택된 단어의 길이와 동일하게 '_'배열 생성

    chance=5;
    while(1) {
        if(chance <= 0)
            break;

        PrintAandU(alpabets, underscore, idx); //알파벳과 '_'단어 출력
        printf("-rest chance: %d \n", chance);
        printf("단어 선택: "); scanf("%c", &user);

        boolen=CompareUserInput(underscore, words[words_idx], idx, user); //입력된 단어와 정답 단어배열 비교
        if(boolen) { // 하나 맞췃다면
            printf("***Strike!!*** \n");
            ChangeAlpabet(alpabets, user);
        }else { //못맞추면
            printf("***ball.. Chance Minus!!*** \n");
            chance--; //찬스 감소
        }


        boolen=0;
        boolen=CompareUnderWord(underscore, words[words_idx], idx); //모두 맞추면
        if(boolen) { //게임 끝. 승리
            printf("***%d All Strike!! Greate!! *** \n", idx);
            break; 
        }
    }
    
    printf("GAME OVER \n");
    return 0;
}