#include <stdio.h>

int solve(int n) {
    int ans=0;
    int i;
    for(i=1;i<=n;i++)
        if(n%i==0)
            ans=ans+1;

    return ans;
}

main() {
    int n;

    scanf("%d",&n);
    printf("약수들의 합: %d \n", solve(n));
}