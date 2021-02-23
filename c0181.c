#include <stdio.h>

void get_scores(int * scores,int n); //score�� ���
int cal_average(int * scores,int n); //score�� ����ϰ�
void print_average(int average); //score�� ����� ����ϰ�

int main(void){
    int scores[5];
    float average;

    get_scores(scores,5);
    average = cal_average(scores,5);
    print_average(average);
    return 0;
}

void get_scores(int * scores,int n){
    int i;
    for(i=0;i<n;i++){
        printf("���� �Է�:");
        scanf("%d",&scores[i]);
    }
}

float cal_average(int * scores, int n){
    int i;
    int sum=0;
    float average;
    for(i=0;i<n;i++){
        sum=sum+scores[i];
    }
    float=sum/n;
    return average;
}

void print_average(float average){
    printf("����� %0.2f�Դϴ�.\n",average);
}
