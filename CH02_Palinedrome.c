#include <stdio.h>
#include <string.h>

int IsPalindrome(char * arr);

main() {
    char arr[50];

    printf("단어 입력: ");
    scanf("%s", arr);
    if(IsPalindrome(arr))
        printf("회문: %s \n", arr);
    else
        printf("회문이 아닌 영어단어 \n");
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