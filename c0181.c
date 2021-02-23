#include <stdio.h>

void get_scores(int * scores,int n); //score를 얻고
int cal_average(int * scores,int n); //score를 계산하고
void print_average(int average); //score의 평균을 출력하고

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
        printf("점수 입력:");
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
    printf("평균은 %0.2f입니다.\n",average);
}
