/*
    anothoer persone's code 
*/

#include <stdio.h>
#include <string.h> //���ڿ� �Լ�
#include <stdlib.h> //����, �����Ҵ�
#include <time.h> //����

main(){
    int chance=5; //Ʋ����� ������ 5ȸ
    int right_answer_count=0; //���� Ƚ���� ���� ������ �γ�.. ����� ���Ǹ� ���� ��ó�� ���δ�
    int right_answer_flag; //flag��ȭ�� ���ؼ� �б����� �ַ����ϴ� ��
    int right_answer_flag2; //���� flag��ġ�� �ڵ��帧�� �����鼭, Ư���� ���ǿ��� 0->1�� ���ϸ鼭 ���ǹ� �б� 
    int num1,i; //num1�� word ���� �ε���
    char user_answer[20]; //������ ������ ���.. �迭�� ???
    char alphabets[30]="abcdefghijklmnopqrstuvwxyz"; 
    char alphabet;
    char words[5][10]={"printf","input","continue","break","while"}; //2���� �迭��.. ������ ������ ���x ������ �迭�� �����ʹ� ģ������
    char words_tmp[5][10]; //���纻...??

    srand(time(0));
    num1=rand()%5;//�ε��� 0~4������ ���� �߻�

    for(i=0;i<strlen(words[num1]);i++){ //�ܾ ����Ű�� ������... �ܾ��� ���̸� ����
        user_answer[i]='_';//�ܾ��� ���̸�ŭ user_answer�迭�� ������ھ �Ҵ�
        words_tmp[num1][i]=words[num1][i];//word�� �������
    }
    printf("���� ���� ��ȸ:%d\n",chance); //���� ����

    while(1){
        printf("%s\n",alphabets); //���ĺ� �迭�� %s ���ĸ� ����.. ģ���ϱ�!... ����ڿ��� ���ĺ� ���
        for(i=0;i<strlen(words[num1]);i++){ //�ش� �ܾ��� ���̸�ŭ ���鼭,
                printf(" %c",user_answer[i]); //������ھ� ���
        }
        printf("\n\n���ĺ� �Է�:");
        scanf(" %c",&alphabet);//����ڿ��� ���ĺ� �Է¹���

        right_answer_flag=0;
        right_answer_flag2=0; //flag��ġ 2���� �����س��� (flag�� Ư���� ���ǿ��� Ȱ��ȭ��)
        for(i=0;i<strlen(words[num1]);i++){ //�ܾ��� ���̸�ŭ
            if(words_tmp[num1][i]==alphabet){//�ܾ�迭 �ϳ��ϳ��� ������ ��� �ϳ��ϳ� ��
                user_answer[i]=alphabet;//�迭�� �ε����� ������, ���ĺ��� �迭�� �Է�
                words_tmp[num1][i]='/'; //���纻���� /�־��ְ�.
                right_answer_count = right_answer_count+1; //���� ����ٸ� ī��Ʈ ����,
                right_answer_flag=1; //flag1�� ��ȯ->����ڰ� ���� ����
            }
            if(words[num1][i]==alphabet){
                right_answer_flag2=1; //flag2�� ��ȯ-> ����ڰ� ���� ����
            }
        }

        if(right_answer_flag==0 && right_answer_flag2==1){  //'/'��ȣ�� �������� ���ؼ� �̷� ������ ���� 
            printf("�̹� �Է��� �����Դϴ�.\n");
        }else if(right_answer_flag==1){
            printf("���信 �ش��ϴ� ���ĺ��Դϴ�.\n");
        }else{
            printf("�ش� ���ڴ� �ܾ �����ϴ�.\n");
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
            printf("���� ���� ��ȸ:%d\n",chance);
        }

        if(right_answer_count==strlen(words[num1])){ //���� ȹ���� �ܾ��� �˸��� ���� ���ٸ� ���� ���� ���� ���̵�
            for(i=0;i<strlen(words[num1]);i++){
                printf(" %c",user_answer[i]);
            }
            printf(" �����Դϴ�.");
            break;
        }
    }
    return 0;
}
