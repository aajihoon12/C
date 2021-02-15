#include <stdio.h>

int BinarySearch(int * arr, int start, int end, int target) {
    int mid;

    while(start<=end) {
        mid=(start+end)/2;

        if(target==arr[mid])
            return mid;
        else if(target<arr[mid])
            end=mid-1;
        else 
            start=mid+1;
    }
    return 0;
}

main() {
    int arr[10000];
    int end;
    int i;
    int target, idx;

    printf("배열의 길이: "); scanf("%d", &end);
    
    for(i=0;i<end;i++) {
        printf("%d: ", i+1);
        scanf("%d", arr[i]);
    }
    
    printf("\n");
    printf("target: "); scanf("%d", &target);
    idx=BinarySearch(arr, 0, end-1, target);
    if(idx)
        printf("idx: %d \n", idx);
    else   
        printf("The Value is not confirmed \n");


    return 0;
}