#include <stdio.h>

int GetMyString(char buffer[], int limit) {
    int i;

    for(i=0;i<limit;i++) { //0-8
        buffer[i]=getchar();
        if(buffer[i]='\n') {
            buffer[i]=0;
            return 1;   
        }
    }
    buffer[i]=0;
    return 0;
}

main() {
    char temp[10];
    int state;

    state=GetMyString(temp, 10-1); //0-8

    if(state) { printf("input : %s\n", temp); }
    else { printf("input : %s => out of range\n", temp); }

    return 0;
}