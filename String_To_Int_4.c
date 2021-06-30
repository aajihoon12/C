#include <stdio.h>

int StringToInteger(char * string) {
    int count=0, num=0;

    while(string[count]!=0) {
        num=num*10 + (string[count] - '0');
        count++;
    }
    return num;
}

main() {
    int first_num, secound_num;
    char first_string[16], secound_string[16];

    printf("input first number: "); gets(first_string);
    printf("input second number: "); gets(secound_string);

    first_num=StringToInteger(first_string);
    secound_num=StringToInteger(secound_string);

    printf("%d + %d = %d \n", first_num, secound_num, first_num+secound_num );
    return 0;
}