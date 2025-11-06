// 5
// 120
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d",&n);
  int fact=1;
  for(int i=1;i<=n;i++){
      fact=fact*i;
  }
  printf("%d",fact);
}
