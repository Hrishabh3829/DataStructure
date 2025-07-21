#include <stdio.h>
#include <string.h>


int main() {

  int n;
  printf("Enter a table you need 1 to 10 :");
  scanf("%d",&n);
  int num=1;
  for(int i=1;i<=10;i++){
    num=i*num;
    printf("%d * %d = %d\n",n,i,num);
  }
  
  return 0;
}