#include <stdio.h>
#include <string.h>

int IsPalindrome(char * arr);

main() {
    char arr[50];

    printf("�ܾ� �Է�: ");
    scanf("%s", arr);
    if(IsPalindrome(arr))
        printf("ȸ��: %s \n", arr);
    else
        printf("ȸ���� �ƴ� ����ܾ� \n");
    return 0;
}

int IsPalindrome(char * arr) {
    int i;
    int len=strlen(arr)/2;

    for(i=0;i<len;i++) {
        if(arr[i]!=arr[len-i])
            return 0;
    }
    return 1;
}