#include <stdio.h>
#include <ctype.h>

main() {
    char a1 = 'b';
    char a2 = 'B';

    printf("%c\n",toupper(a1)); //대문자로
    printf("%c\n",tolower(a2)); //소문자로

    return 0;
}
