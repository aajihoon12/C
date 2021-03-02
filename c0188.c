#include <stdio.h>
#include <string.h>
#include <math.h>

main(){
    int T;
    char id[19];
    int valid; //�߱��� ���̵� ��ȿ�� �˻� 1�̸� ��ȿ 0�̸� ��ȿ
    int male; // ���� 1�̸� ���� 0�̸� ����
    int cnt; //�����ڵ忡�� 1�� ����
    int bcnt; //�����ڵ忡�� 0�� ����
    int i;
    int year,day,month=0;
    int tmp;
    int addday; //1�̸� ����
    char check; //checksum�� ����� ������
    int checksum; //checksum�� ���� ������ ����� int��
    int max;
    scanf("%d",&T);
    while(T--){ // 5>0 ���� �� 5��(�Էµ� Ƚ�� ��ŭ �ݺ�)
        valid=1;
        male=1;
        scanf("%s",id);
        cnt=0;
        checksum=0;
        bcnt=0;

        //�����ڵ� �м�
        //1�� 1���̰� 0�� 5���̾�� ��ȿ
        for(i=0;i<6;i++){
            if(id[i] == '1'){
                cnt++;
            }else if(id[i] != '0'){ //1�� ���� �ϳ��� �մٸ�,
                bcnt++; //ī��Ʈ
            }
        }
        if(cnt!=1){
            valid=0;
        }else if(bcnt!=0){
            valid=0;
        }

        //�����ڵ� �м�
        year=0;
        day=0;
        month=0;
        for(i=6;i<10;i++){
            tmp=id[i]-'0'; //��:���� '1'�� ���� 1�� ����� ����(�ƽ�Ű�ڵ�ǥ ����)
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
        //���� ����Ͽ� �����̸� 2���� 29�ϱ���
        if(year<1900 || year>2014){
            valid=0;
        }
        if(month<1 || month>12){
            valid=0;
        }
        addday=0;
        if(year%400==0 || year%4==0 && year%100!=0){ //���� ���ϴ� ����
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
        //���� �м�
        tmp=id[16]-'0';
        if(id[14]=='0' && id[15]=='0' && id[16]=='0'){
            valid=0;
        }
        if(tmp%2==0){
            male=0;
        }else{
            male=1;
        }
        //üũ�� �м�
        if(valid==1){
            for(i=0;i<17;i++){
                cnt=id[i]-'0';
                checksum=checksum+cnt*pow(2.0,17-i);
                checksum=checksum%11;
            }//?
            if(checksum<10 && checksum >=0){
                check=checksum + '0'; //�ƽ�Ű�ڵ�ǥ ����
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
