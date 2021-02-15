#include <stdio.h>
#include <string.h>

main() {
    char name[5];
    strcpy(name, "Inho");
    int age=20;
    printf("%s의 나이는 %d살입니다. \n", name, age);
    return 0;
}