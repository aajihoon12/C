#include <stdio.h>
#include <ctype.h>

main() {
    char a1 = 'b';
    char a2 = 'B';

    printf("%c\n",toupper(a1)); //�빮�ڷ�
    printf("%c\n",tolower(a2)); //�ҹ��ڷ�

    return 0;
}
