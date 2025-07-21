#include <stdio.h>
#include <string.h>


int main() {

  int n;
  printf("Enter a table you need 1 to 10 :");
  scanf("%d",&n);
  for(int i=1;i<=10;i++){
    int result = n * i;
    printf("%d * %d = %d\n",n,i,result);
  }
  
  return 0;
}