#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    char arr[4]= {
        {' '},
        {"����"},
        {"����"},
        {"��"}
    };
    int computer;
    int user;
    int win=0, tie=0;

    srand((int)time(0));
    while(1) {
        prinf("������ 1, ������ 2, ���� 3: ");
        scanf("%d", &user);
        computer=(rand()%3)+1;

        if(user==computer) {
            printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�! \n", arr[user], arr[computer]);
            tie++;
        }else if(user==1) {
            if(computer==2) {
               printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�! \n", arr[user], arr[computer]);
               win++;
            }else {
                printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�! \n", arr[user], arr[computer]);
                break;
            }
        }else if(user==2) {
            if(computer==3) {
               printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�! \n", arr[user], arr[computer]);
               win++;
            }else {
                printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�! \n", arr[user], arr[computer]);
                break;
            }
        }else if(user==3) {
            if(computer==1) {
               printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�! \n", arr[user], arr[computer]);
               win++;
            }else {
                printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�! \n", arr[user], arr[computer]);
                break;
            }
        }
    }
    printf("\n");
    
    printf("������ ���: %d��, %d��", win, tie);
    return 0;
}