#include <stdio.h>

#define LEN 9

main() {
    int i, idx, max=0;
    int arr[LEN];

    for(i=0;i<LEN;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<LEN;i++) {
        if(max<arr[i]) {
            max=arr[i];
            idx=i;
        }
    }
    printf("%d\n%d\n", max, idx);
    return 0;
}