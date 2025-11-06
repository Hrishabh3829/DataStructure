#include <stdio.h>
#include <string.h>

//0 1 1 2 3 5 8
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    
    return fibonacci(n-1) + fibonacci(n-2);
    
}

int main() {
  int n;
  scanf("%d",&n);
  
//   int result=fibonacci(n);
//   printf("%d",result);

  for(int i=0;i<n;i++ ){
      printf("%d ",fibonacci(i));
  }
}
