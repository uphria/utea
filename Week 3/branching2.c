#include <stdio.h>
int guess_number();

int main(){
  printf("Write in a piece of paper a number btween 1 and 8 inclusive\n");
  printf("your number is %d\n", guess_number());
}

int guess_number(){
  char answer;
  printf("Is your number >= 5? ");
  scanf(" %c", &answer);
  if (answer == 'y'){
    printf("Is your number >= 7? ");
    scanf(" %c", &answer);
    if (answer == 'y'){
      printf("Is your number > 7? ");
      scanf(" %c", &answer);
      if (answer == 'y'){
        return 8;
      } else {
        return 7;
      }
    } else {
      printf("Is your number > 5? ");
      scanf(" %c", &answer);
      if (answer == 'y'){
        return 6;
      } else {
        return 5;
      }
    }
  } else {
    printf("is your number >= 3? ");
    scanf(" %c", &answer);
    if (answer == 'y'){
      printf("Is your number > 3? ");
      scanf(" %c", &answer);
      if (answer == 'y'){
        return 4;
      } else {
        return 3;
      }
    } else {
      printf("Is your number > 1?: ");
      scanf(" %c", &answer);
      if (answer == 'y'){
        return 2;
      } else {
        return 1;
      }
    }
  }
}