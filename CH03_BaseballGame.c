#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CheckingTheArray(int *s, int *b, int *cp, int *user);

main() {
    int arr_c[3];
    int arr_u[3];
    int cnt=0;
    int ball=0, strike=0;

    srand((int)time(0));
    arr_c[0]=rand()%10; arr_c[1]=rand()%10; arr_c[2]=rand()%10;

    printf("Start Game!");
    while(1) {
        if(strike>=3)
            break;
        cnt++;
        printf("3개의 숫자 선택: ");  scanf("%d %d %d", arr_u[0], arr_u[1], arr_u[2]);
        
        CheckingTheArray(strike, ball, arr_c, arr_u);
        printf("%d번째 도전 결과: %dstrike, %dball! \n", cnt, strike, ball);
    }
    printf("\n\n");
    printf("Game Over!");
    return 0;
}

void CheckingTheArray(int *s, int *b, int *cp, int *user){
    int i=0, j;

    while(i<3) {
        j=0;
        while(j<3) {
            if(user[i]==cp[j])
                if(i==j) {
                    (*s)++;
                    break;
                }
                else{    
                    (*b)++;
                    break;
                }
            j++;
        }
        i++;
    }
    //return 0;
}