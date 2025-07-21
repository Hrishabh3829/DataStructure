#include <stdio.h>
#include<string.h>

int lengthOfString(char str[100]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int lengthWithoutSpaces(char str[100]){
    int i=0, count=0;
    while(str[i]!='\0'){
        if(str[i] != ' '){
            count++;
        }
        i++;
    }
    return count;
}

int countSpaces(char str[100]){
    int i=0, spaceCount=0;
    while(str[i]!='\0'){
        if(str[i] == ' '){
            spaceCount++;
        }
        i++;
    }
    return spaceCount;
}

int main() {
    char str[100];
    scanf("%s",str);
    printf("Length of a String: %d",lengthOfString(str));
    return 0;
}