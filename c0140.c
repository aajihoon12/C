#include <stdio.h>

main() {
    int a,b;
    int a_sum=0;
    int b_sum=0;

    for(a=1;a<=2;a++) {
        printf("A??¨ö¨¬:%d©ö??? ?¡Æ\n",a);
        a_sum = a_sum + 1;
        for(b=1;b<=3;b++){
            printf("     B??¨ö¨¬:%d©ö???\n",b);
            b_sum = b_sum + 1;
        }
    }
    printf("?? A??¨ö¨¬:%d©ö???\n",a_sum);
    printf("?? B??¨ö¨¬:%d©ö???",b_sum);

    return 0;
}
