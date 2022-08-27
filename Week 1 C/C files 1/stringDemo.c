#include <stdio.h>
#include <string.h>

int main(void) {
  char first[100];
  char second[] = " world!";
  int length;

  strcpy(first, "Hello");
  //copy hello into first

  length = strlen(first);

  printf("The length of %s is %d \n", first, length);

  strcat(first, second);
  //join content of first and second

  printf("The new text is %s \n", first);

  int result = strcmp(first, second);

  printf("The result of comparing \"%s\" with \"%s\" is %d \n", first, second, result);

  return 0;
}