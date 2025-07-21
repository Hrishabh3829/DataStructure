#include <stdio.h>
#include<string.h>
void palindrome(char str[100]){
    int len = strlen(str);
    char rev[100];
    
    // Manually reverse the string
    for(int i = 0; i < len; i++){
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0'; // Null terminate
    
    if(strcmp(str,rev)==0){
        printf("palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
int main(void) {
    char str[100];
    scanf("%s",str);
    palindrome(str);
    return 0;
}