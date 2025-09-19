#include <stdio.h>
#include <string.h>

// Custom function to reverse a string
void reverse_string(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
  char rev[100], str[100];
  scanf("%s", str);

  strcpy(rev, str);

  reverse_string(rev);

  if (strcmp(str, rev) == 0)
    printf("palindrome\n");
  else
    printf("not palindrome\n");

  return 0;
}