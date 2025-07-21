#include <stdio.h>
#include<string.h>

int lengthOfString(char str[100]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int main() {
    char str[100];
    scanf("%s",str);
    printf("Length of a String: %d",lengthOfString(str));
    return 0;
}