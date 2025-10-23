#include <stdio.h>
#include <string.h>

int main() {
  char str[100]; // hrishabh

  printf("Enter a string: ");
  scanf("%99s", str);

  int len = strlen(str); // len=8

  printf("Reversed String :");

  for (int i = len - 1; i >= 0; i--) {
    printf("%c", str[i]);
  }
  printf("\n");
  return 0;
}