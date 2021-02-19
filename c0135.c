#include <stdio.h>
#include <string.h>

int main(void) {
    int i =7;
    char name[] = "abcde fghij"; //이렇게도 되네

    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(name));
    printf("%d",strlen(name));

    return 0;
}
