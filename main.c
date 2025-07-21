#include <stdio.h>

int reverseNumber(int n){//n=123
    int reversed=0,rem;
    while(n!=0){
        rem=n%10;
        reversed=reversed*10+ rem;
        n /= 10;
    }
    return reversed;
}
int main() {
    int number; 
    scanf("%d",&number);
    int result = reverseNumber(number);
    printf("%d\n", result);

    return 0;
}