#ifndef __C0187_H__
#define __C0187_H__

#include <math.h>

int CheckingIDCode(char * csCode) {
    int sex; //성별
    int valid=0; //검증 flag
    int checksum; //csCode[17] 부분의 검증 코드

    valid=VerifyTheAreaCode(csCode); // id부분 중 지역 부분을 검증
    valid=VerifyBirthCode(csCode); //id부분 중 생일 부분을 검증
    sex=VerifySequenceCode(csCode); //id부분 중 성별 부분을 검증
    checksum=VerifyCheckSum(csCode);
    if(checksum==10)
        csCode[17]='x';
    else
        csCode[17]=checksum + ('7'-7); //숫자를 문자값으로 변환

    if(valid)
        return sex;
    return -1; 
}

int ConvertToLong(char * csCode, int start, int end) { //문자열을 인덱스만큼의 숫자로 변환
    long cvalue=0; //문자열에 대한 숫자기 때문에 매우 큰 수가 저장 되야하고 따라서 보다 메모리 적으로 크기가 큰 long로 선택
    int i, j=0;
    int squared=end-start; //10의 자리를 구하기 위한 제곱은 구조상 1이 적어야한다!

    for(i=start;i<=end;i++) { //인덱스 만큼
        cvalue += pow(10, squared-(j++)) * (csCode[i] -('7'-7)); //자리수만큼 10을 제곱하고 인덱스의 문자를 숫자로 치환해서 차곡 차곡 저장
    }
    return cvalue;
}

int VerifyTheAreaCode(char * csCode) { //0~5만큼 검증
    long cvalue;
    int flag=0;

    cvalue=ConvertToLong(csCode, 0, 5); //0~5인덱스 만큼의 문자열 치환
    if(cvalue==000001) //flag를 통해 해당 숫자와 비교 및 검증 flag=1이 아니면, not invalid 
        flag=1;
    else if(cvalue==000010)
        flag=1;
    else if(cvalue==000100)
        flag=1;
    else if(cvalue==001000)
        flag=1;
    else if(cvalue==010000)
        flag=1;
    else if(cvalue==100000)
        flag=1;

    return flag;    
}

int VerifyBirthCode(char * csCode) { //생일 코드 검증 인덱스는 6~13
    long cvalue;

    cvalue=ConvertToLong(csCode, 6, 13); //6~13 인덱스의 수 만큼 수로 치환하고
    if(cvalue>=19000101 && cvalue<=20141231) // 범위값 검사
        return 1;
    return 0;
}

int VerifySequenceCode(char * csCode) { //순서코드 검증 후 1과 0 반환 1은 male 0은 female
    long cvalue;

    cvalue=ConvertToLong(csCode, 14, 16);//14~16 인덱스 문자열을 수로 치환
    if(cvalue%2==0) //짝수인지 홀수인지 검증 후 반환
        return 0; //femail
    return 1; //mail
}

int VerifyCheckSum(char * csCode) { //17 index의 최종 checksum 검사
    long csValue=PowerOfTwo(csCode, 0, 17); //2를 제곱하는 재귀함수 호출로 결과값 반환 받아서, 

    return csValue % 11; //0~10까지의 수를 반환
}

long PowerOfTwo(char * csCode, int i, int j) { //2를 제곱하는 재귀함수 // i(0-18), j(17-0) 
    int value;

    if(j<=0) //j즉, 2의 지수 값이 0이된다면 0을 반환. 따라서 csCode[18]까지 반복 x 
        return 0;

    value = *(csCode+i) - ('7' - 7); //인덱스의 한 문자를 수로 치환하고
    return ( value * pow(2, j) ) + PowerOfTwo(csCode, ++i, --j); //해당 수에대해서 제곱 및 i(배열 index는 증가), j(2의제곱수는 감소)
}

#endif