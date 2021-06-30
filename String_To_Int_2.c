#include <stdio.h>
#include <string.h>

main() {
    int pos_num=1; num=0, i, count;
    char num_string[4]="123";

    count=strlen(num_string);
    for(i=0;i<count;i++) pos_num*=10;

    for(i=0;i<count;i++) {
        num+= (num_string[i] - '0')) * pos_num;
        pos_num/10;
    }
    
    printf(" %s -> %d \n", num_string, num);
    return 0;
}