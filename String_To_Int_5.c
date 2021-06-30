#include <stdio.h>
#include <stdlib.h>

main() {
    int first_num, secound_num;
    char first_string[16], secound_string[16];

    printf("input first number: "); gets(first_string);
    printf("input secound nuber: "); gets(secound_string);

    first_num=atoi(first_string);
    secound_num=atoi(secound_string);

    printf("%d + %d = %d \n", first_num, secound_num, first_num+secound_num );
    return 0;
}