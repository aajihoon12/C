#include <stdio.h>

int main() {
    int menu;
    printf("메뉴를 고르세요\n");
    printf("(1:짜장면 2:짬뽕 3: 우동 4: 볶음밥) :");
    scanf(" %d", &menu);

    switch(menu) {
        case(1):printf("짜장면을 선택했습니다.\n");
            break;
        case(2):printf("짬뽕을 선택했습니다\n");
            break;
        case(3):printf("우동을 선택했습니다.\n");
            break;
        case(4):printf("복음밥을 선택했습니다.\n");
            break;
        default:printf("해당 메뉴가 없습니다.\n");
            break;
    }

    return 0;
}
