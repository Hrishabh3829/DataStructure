#include <stdio.h>
#include<string.h>
void palindrome(char str[100]){
    char rev[100];
    strcpy(rev,str);
    strrev(rev);
    if(strcmp(str,rev)==0){
        printf("palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
int main(void) {
    char str;
    scanf("%s",&str);
    palindrome(str);
    return 0;
}