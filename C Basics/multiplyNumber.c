// input:
//   5244
// output:
//   160
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int product=1;
    while(n>0){
        int digit=n%10;
        product=product*digit;
        n=n/10;
    }
    printf("%d",product);
    
}
