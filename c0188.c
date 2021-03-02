#include <stdio.h>
#include <string.h>
#include <math.h>

main(){
    int T;
    char id[19];
    int valid; //중국인 아이디 유효성 검사 1이면 유효 0이면 무효
    int male; // 성별 1이면 남자 0이면 여자
    int cnt; //지역코드에서 1의 개수
    int bcnt; //지역코드에서 0의 개수
    int i;
    int year,day,month=0;
    int tmp;
    int addday; //1이면 윤년
    char check; //checksum한 결과의 문자형
    int checksum; //checksum을 수식 대입한 결과의 int형
    int max;
    scanf("%d",&T);
    while(T--){ // 5>0 까지 즉 5번(입력된 횟수 만큼 반복)
        valid=1;
        male=1;
        scanf("%s",id);
        cnt=0;
        checksum=0;
        bcnt=0;

        //지역코드 분석
        //1은 1개이고 0은 5개이어야 유효
        for(i=0;i<6;i++){
            if(id[i] == '1'){
                cnt++;
            }else if(id[i] != '0'){ //1의 값이 하나라도 잇다면,
                bcnt++; //카운트
            }
        }
        if(cnt!=1){
            valid=0;
        }else if(bcnt!=0){
            valid=0;
        }

        //생일코드 분석
        year=0;
        day=0;
        month=0;
        for(i=6;i<10;i++){
            tmp=id[i]-'0'; //예:문자 '1'을 숫자 1로 만드는 과정(아스키코드표 참조)
            year=year*10+tmp;
        }
        for(i=10;i<12;i++){
            tmp=id[i]-'0';
            month=month*10+tmp;
        }
        for(i=12;i<14;i++){
            tmp=id[i]-'0';
            day=day*10+tmp;
        }
        //윤년 계산하여 윤년이면 2월이 29일까지
        if(year<1900 || year>2014){
            valid=0;
        }
        if(month<1 || month>12){
            valid=0;
        }
        addday=0;
        if(year%400==0 || year%4==0 && year%100!=0){ //윤년 구하는 공식
            addday=1;
        }
        if(valid==1){
            switch(month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                max=31;
                break;
            case 4: case 6: case 9: case 11:
                max=30;
                break;
            case 2:
                max=28+addday;
                break;
            }
            if(day<1 || day>max){
                valid=0;
            }
        }
        //성별 분석
        tmp=id[16]-'0';
        if(id[14]=='0' && id[15]=='0' && id[16]=='0'){
            valid=0;
        }
        if(tmp%2==0){
            male=0;
        }else{
            male=1;
        }
        //체크섬 분석
        if(valid==1){
            for(i=0;i<17;i++){
                cnt=id[i]-'0';
                checksum=checksum+cnt*pow(2.0,17-i);
                checksum=checksum%11;
            }//?
            if(checksum<10 && checksum >=0){
                check=checksum + '0'; //아스키코드표 참조
            }else if(checksum==10){
                check='X';
            }
            if(check!=id[17]){
                valid=0;
            }
        }
        if(valid==0){
            printf("Invalid\n");
        }else{
            if(male==1){
                printf("Male\n");
            }else{
                printf("Female\n");
            }
        }
    }
    return 0;
}
