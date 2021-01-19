#include <stdio.h>

main() {
    int time;
    int h, m, s;

    printf("second: "); scanf("%d", &time);
    h=time/3600;
    time=time%3600;
    m=time/60;
    time=time%60;
    s=time;
    printf("%dH %dM %dS", h, m, s);
    return 0;
}