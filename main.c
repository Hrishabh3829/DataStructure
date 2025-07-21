#include <stdio.h>
#include<string.h>
int fibonacci(int n){
   if(n==0){
       return 0;
   }
    else if(n==1){
       return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
    
    
}
int main() {
    int number;
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        printf("%d\n",fibonacci(i));
    }
    return 0;
   
}