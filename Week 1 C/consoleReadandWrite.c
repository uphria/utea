#include <stdio.h>

int main(void) {
  char text[100];
  printf("What is your name: ");
  scanf("%s", text);
  char message[] = ("Hello, ");
  printf("%s %s\n", message, text);
}