#include <stdio.h>

main() {
    int a;
    int i;
    int cnt=0;

    a=2;
    for(i=2;i<=a;i++) {
        if(cnt==10)
            break;
        if(a%i==0)
            if(a!=i) 
                break;
        printf("%d ", a);
        cnt++;  a++;
    }
    return 0;
}