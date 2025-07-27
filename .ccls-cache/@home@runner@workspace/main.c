#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else {
    return fib(n - 1) + fib(n - 2);
  }
}
int main() {
  int n;
  scanf("%d", &n);
  // int result=fib(n);
  for (int i = 0; i < n; i++) {
    printf("%d ", fib(i));
  }

  return 0;
}
