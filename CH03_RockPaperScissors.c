#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    char arr[4]= {
        {' '},
        {"바위"},
        {"가위"},
        {"보"}
    };
    int computer;
    int user;
    int win=0, tie=0;

    srand((int)time(0));
    while(1) {
        prinf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &user);
        computer=(rand()%3)+1;

        if(user==computer) {
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다! \n", arr[user], arr[computer]);
            tie++;
        }else if(user==1) {
            if(computer==2) {
               printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다! \n", arr[user], arr[computer]);
               win++;
            }else {
                printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다! \n", arr[user], arr[computer]);
                break;
            }
        }else if(user==2) {
            if(computer==3) {
               printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다! \n", arr[user], arr[computer]);
               win++;
            }else {
                printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다! \n", arr[user], arr[computer]);
                break;
            }
        }else if(user==3) {
            if(computer==1) {
               printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다! \n", arr[user], arr[computer]);
               win++;
            }else {
                printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다! \n", arr[user], arr[computer]);
                break;
            }
        }
    }
    printf("\n");
    
    printf("게임의 결과: %d승, %d무", win, tie);
    return 0;
}