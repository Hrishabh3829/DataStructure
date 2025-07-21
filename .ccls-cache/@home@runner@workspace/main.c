#include <stdio.h>
#include<string.h>
int lenghtOfString(char str[100]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
int main() {
   
    char str;
    scanf("%s",&str);
    printf("Length of a String: %d",lenghtOfString(str));
    return 0;
   
}