#include <stdio.h>
#include <ctype.h>

main(){
    char c1 = 'a';
    char c2 = 'A';

    if(islower(c1)){
        printf("c1의 값은 알파벳 소문자입니다.\n");
    }

    if(isupper(c2)){
        printf("c2의 값은 알파벳 대문자입니다.");
    }

    return 0;
}
