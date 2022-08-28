#include <stdio.h>

void reverse(char destination[], char original[], int len);

int main(){
  char original[] = "Thunderbolt";
  int len = sizeof original/sizeof original[0] - 1;
  //w/o -1 returns the string + null terminator

  char destination[len];
  reverse(destination, original, len);
  printf("Original: %s\nReversed: %s\n", original, destination);
}

void reverse(char destination[], char original[], int len){
  int indexDest = 0;
  int indexOriginal = len - 1;
  while (indexOriginal >= 0){
    destination[indexDest++] = original[indexOriginal--];
  }
  destination[indexDest] = '\0';
}