#ifndef __C0187_H__
#define __C0187_H__

#include <math.h>

int CheckingIDCode(char * csCode) {
    int sex; //����
    int valid=0; //���� flag
    int checksum; //csCode[17] �κ��� ���� �ڵ�

    valid=VerifyTheAreaCode(csCode); // id�κ� �� ���� �κ��� ����
    valid=VerifyBirthCode(csCode); //id�κ� �� ���� �κ��� ����
    sex=VerifySequenceCode(csCode); //id�κ� �� ���� �κ��� ����
    checksum=VerifyCheckSum(csCode);
    if(checksum==10)
        csCode[17]='x';
    else
        csCode[17]=checksum + ('7'-7); //���ڸ� ���ڰ����� ��ȯ

    if(valid)
        return sex;
    return -1; 
}

int ConvertToLong(char * csCode, int start, int end) { //���ڿ��� �ε�����ŭ�� ���ڷ� ��ȯ
    long cvalue=0; //���ڿ��� ���� ���ڱ� ������ �ſ� ū ���� ���� �Ǿ��ϰ� ���� ���� �޸� ������ ũ�Ⱑ ū long�� ����
    int i, j=0;
    int squared=end-start; //10�� �ڸ��� ���ϱ� ���� ������ ������ 1�� ������Ѵ�!

    for(i=start;i<=end;i++) { //�ε��� ��ŭ
        cvalue += pow(10, squared-(j++)) * (csCode[i] -('7'-7)); //�ڸ�����ŭ 10�� �����ϰ� �ε����� ���ڸ� ���ڷ� ġȯ�ؼ� ���� ���� ����
    }
    return cvalue;
}

int VerifyTheAreaCode(char * csCode) { //0~5��ŭ ����
    long cvalue;
    int flag=0;

    cvalue=ConvertToLong(csCode, 0, 5); //0~5�ε��� ��ŭ�� ���ڿ� ġȯ
    if(cvalue==000001) //flag�� ���� �ش� ���ڿ� �� �� ���� flag=1�� �ƴϸ�, not invalid 
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

int VerifyBirthCode(char * csCode) { //���� �ڵ� ���� �ε����� 6~13
    long cvalue;

    cvalue=ConvertToLong(csCode, 6, 13); //6~13 �ε����� �� ��ŭ ���� ġȯ�ϰ�
    if(cvalue>=19000101 && cvalue<=20141231) // ������ �˻�
        return 1;
    return 0;
}

int VerifySequenceCode(char * csCode) { //�����ڵ� ���� �� 1�� 0 ��ȯ 1�� male 0�� female
    long cvalue;

    cvalue=ConvertToLong(csCode, 14, 16);//14~16 �ε��� ���ڿ��� ���� ġȯ
    if(cvalue%2==0) //¦������ Ȧ������ ���� �� ��ȯ
        return 0; //femail
    return 1; //mail
}

int VerifyCheckSum(char * csCode) { //17 index�� ���� checksum �˻�
    long csValue=PowerOfTwo(csCode, 0, 17); //2�� �����ϴ� ����Լ� ȣ��� ����� ��ȯ �޾Ƽ�, 

    return csValue % 11; //0~10������ ���� ��ȯ
}

long PowerOfTwo(char * csCode, int i, int j) { //2�� �����ϴ� ����Լ� // i(0-18), j(17-0) 
    int value;

    if(j<=0) //j��, 2�� ���� ���� 0�̵ȴٸ� 0�� ��ȯ. ���� csCode[18]���� �ݺ� x 
        return 0;

    value = *(csCode+i) - ('7' - 7); //�ε����� �� ���ڸ� ���� ġȯ�ϰ�
    return ( value * pow(2, j) ) + PowerOfTwo(csCode, ++i, --j); //�ش� �������ؼ� ���� �� i(�迭 index�� ����), j(2���������� ����)
}

#endif