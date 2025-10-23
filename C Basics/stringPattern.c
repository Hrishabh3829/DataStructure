#include <stdio.h>
#include <string.h>
int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str); // str=hrishabh

  int len = strlen(str); // len=8

  for (int i = 1; i <= len; i++) {
    for (int j = 0; j < i; j++) {
      printf("%c", str[j]);
    }
    printf("\n");
  }
  return 0;
}
// PYRAMID
// If str = "HELLO" and len = 5, the output would be:

// H
// HE
// HEL
// HELL
// HELLO
// Step by step:

// When i=1: print str[0] → "H"
// When i=2: print str[0], str[1] → "HE"
// When i=3: print str[0], str[1], str[2] → "HEL"
// When i=4: print str[0], str[1], str[2], str[3] → "HELL"
// When i=5: print str[0], str[1], str[2], str[3], str[4] → "HELLO"