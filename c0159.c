#include <stdio.h>
#include <string.h>

main(){
    char s1[10];
    char s2[10];

    printf("10자 미만의 영어 문자열 입력:");
    scanf(" %s", s1);
    printf("영어 문자열의 첫번째 문자:%c\n",s1[0]);
    printf("영어 문자열의 마지막 문자:%c\n",s1[strlen(s1)-1]);

    printf("5자 미만의 한글 문자열 입력:");
    scanf(" %s",s2);
    printf("한글 문자열의 첫번째 문자:%c%c\n",s2[0],s2[1]);
    printf("한글 문자열의 마지막 문자:%c%c\n",s2[strlen(s2)-2],s2[strlen(s2)-1]);

    return 0;
}
