#include <stdio.h>

const int n;

void solve() {
    int i;

    for(i=1;i<=n;i++)
        if(i%3==0)
            printf("X ");
        else
            printf("%d ",i);
}

main() {
    scanf("%d", &n);
    solve();
    return 0;
}