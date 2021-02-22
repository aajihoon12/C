#include <stdio.h>
#include <string.h> //문자열 관련 헤더, 제품

main(){
    char first[25] = "안녕하세요";
    char last[25] = " 감사합니다";

    strcat(first,last);
    printf("%s\n", first);

    return 0;
}
