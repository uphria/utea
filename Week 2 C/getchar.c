#include <stdio.h>
#include <ctype.h>

int is_even(char num);
char get_digit();

int main(){
  char c = get_digit();
  printf("Is %c even digit? (0 for no and 1 for yes): %d\n", c, is_even(c));
}

int is_even(char num){
  return isdigit(num) && (num%2 == 0);
  //returns 1 if both digit and even
}

char get_digit(){
  char data;
  printf("Enter a number from between 0 and 9: ");
  data = getchar();
  //get user input
  return data;
}