#include <stdio.h>
#include <string.h>

main(){
    char arr[100];

    printf("���ܾ� �Է��ϼ���: ");
    gets(arr);

    for(int i = strlen(arr)-1; i>=0; i--){
        printf("%c", arr[i]);
    }

    return 0;
}
