#include <stdio.h>
#include <string.h>

main(){
    int a[3] = {1,2,3};
    float b[3] = {0.1,0.2,0.3};
    char c[10] = {'a','b','c'};
    char d[10] = "abc";

    printf("%d\n",a[0]);
    printf("%.1f\n",b[1]);
    printf("%c\n",c[2]);

    printf("%d\n",strlen(c)); //나는 논리적으로 같다고 생각
    printf("%d\n",strlen(d));

    return 0;
}
