/*
    anothoer persone's code 
*/

#include <stdio.h>
#include <string.h> //문자열 함수
#include <stdlib.h> //난수, 동적할당
#include <time.h> //난수

main(){
    int chance=5; //틀린경우 찬스는 5회
    int right_answer_count=0; //맞은 횟수를 따로 변수로 두네.. 사용자 편의를 위한 것처럼 보인다
    int right_answer_flag; //flag변화를 통해서 분기점을 주려고하는 것
    int right_answer_flag2; //보통 flag장치는 코드흐름을 지나면서, 특정한 조건에서 0->1로 변하면서 조건문 분기 
    int num1,i; //num1은 word 선택 인덱스
    char user_answer[20]; //유저의 정답을 담기.. 배열로 ???
    char alphabets[30]="abcdefghijklmnopqrstuvwxyz"; 
    char alphabet;
    char words[5][10]={"printf","input","continue","break","while"}; //2차원 배열로.. 포인터 문법은 사용x 어차피 배열과 포인터는 친구관계
    char words_tmp[5][10]; //복사본...??

    srand(time(0));
    num1=rand()%5;//인덱스 0~4까지의 난수 발생

    for(i=0;i<strlen(words[num1]);i++){ //단어를 가르키는 포인터... 단어의 길이를 추출
        user_answer[i]='_';//단어의 길이마큼 user_answer배열에 언더스코어를 할당
        words_tmp[num1][i]=words[num1][i];//word의 복사과정
    }
    printf("현재 남은 기회:%d\n",chance); //찬스 추출

    while(1){
        printf("%s\n",alphabets); //알파벳 배열도 %s 서식명세 가능.. 친구니까!... 사용자에게 알파벳 출력
        for(i=0;i<strlen(words[num1]);i++){ //해당 단어의 길이만큼 돌면서,
                printf(" %c",user_answer[i]); //언더스코어 출력
        }
        printf("\n\n알파벳 입력:");
        scanf(" %c",&alphabet);//사용자에게 알파벳 입력받음

        right_answer_flag=0;
        right_answer_flag2=0; //flag장치 2개를 마련해놓고 (flag는 특정한 조건에서 활성화됨)
        for(i=0;i<strlen(words[num1]);i++){ //단어의 길이만큼
            if(words_tmp[num1][i]==alphabet){//단어배열 하나하나와 유저의 답안 하나하나 비교
                user_answer[i]=alphabet;//배열의 인덱스가 같으니, 알파벳을 배열에 입력
                words_tmp[num1][i]='/'; //복사본에는 /넣어주고.
                right_answer_count = right_answer_count+1; //답을 맞춰다면 카운트 증가,
                right_answer_flag=1; //flag1로 변환->사용자가 답을 맞춤
            }
            if(words[num1][i]==alphabet){
                right_answer_flag2=1; //flag2로 변환-> 사용자가 답을 맞춤
            }
        }

        if(right_answer_flag==0 && right_answer_flag2==1){  //'/'기호의 대입으로 인해서 이런 조건이 가능 
            printf("이미 입력한 글자입니다.\n");
        }else if(right_answer_flag==1){
            printf("정답에 해당하는 알파벳입니다.\n");
        }else{
            printf("해당 글자는 단어에 없습니다.\n");
            chance=chance-1;
        }

        for(i=0;i<30;i++){
            if(alphabets[i]==alphabet){
                alphabets[i]='/';
            }
        }

        if(chance==0){
            printf("GAME OVER");
            break;
        }else{
            printf("현재 남은 기회:%d\n",chance);
        }

        if(right_answer_count==strlen(words[num1])){ //맞은 획수와 단어의 알맹이 수가 같다면 전부 답을 맞춘 것이됨
            for(i=0;i<strlen(words[num1]);i++){
                printf(" %c",user_answer[i]);
            }
            printf(" 정답입니다.");
            break;
        }
    }
    return 0;
}
