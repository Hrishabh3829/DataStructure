// 121
// Palindrome

#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int rev=0,rem,original=n;
   while(n>0){
       rem=n%10;
       rev=rev*10+rem;
       n/=10;
   }
   
   (rev==original) ? printf("Palindrome") : printf("Not a Palindrome");
   
   return 0;
}
