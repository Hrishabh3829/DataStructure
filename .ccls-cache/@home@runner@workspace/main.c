#include <stdio.h>

int reverseNumber(int n){//n=123
    int reversed=0,rem;
    while(n!=0){
        rem=rem%10;
        reversed=reversed*10+ rem;
        n /= 10;
    }
    return reversed;
}
int main() {
    int number; 
    scanf("%d",&number);
    reverseNumber(number);

    return 0;
}