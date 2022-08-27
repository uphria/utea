#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIDDLE 7
#define MIN 2
#define MAX 12

int throw_dice();
char get_user_choice();
int decide(char choice, int outcome);
void print_outcome(char choice, int outcome);

int main(){
  char choice = get_user_choice();
  int outcome = throw_dice();
  print_outcome(choice, outcome);
  return 0;
}

char get_user_choice(){
  char choice;
  printf("Type \'h\' for high or \'l\' for low: ");
  scanf("%c", &choice);
  return choice;
}

int decide(char choice, int outcome){
  if ((choice == 'l' && outcome < MIDDLE) || (choice == 'h' && outcome > MIDDLE)) return 1;

  if (outcome == MIDDLE) return 0;

  return -1;
}

int throw_dice(){
  srand(time(0));
  return(rand()%(MAX-MIN+1)) + MIN;
  //return random number between 2 - 12
}

void print_outcome(char choice, int outcome){
  int result = decide(choice, outcome);
  if (result == 1){
    printf("You chose \'%c\'. The outcome was %d. You won!\n", choice, outcome);
  }
  if (result == -1){
    printf("You chose \'%c\'. The outcome was %d. You lost!\n", choice, outcome);
  }
  if (result == 0){
    printf("You chose \'%c\'. The outcome was %d. You tied!\n", choice, outcome);
  }
}