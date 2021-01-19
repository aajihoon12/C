#include <stdio.h>

main() {
    int a, b, c;
    int temp;
    int i;

    printf("최대 공약수를 위한 a, b 입력: ");
    scanf("%d %d", &a, &b);
    if(a<b) { // 둘 중의 작은 수를 찾음
        temp=a;
        a=b;
        b=temp;
    }
    for(i=1;i<=a;i++)
        if(!(a%i) && !(b%i)) //둘 다 나누어 떨어 뜨리면
            c=i;

    printf("%d, %d의 최대 공약수: %d ", a, b, c);
    return 0;
}