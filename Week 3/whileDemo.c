#include <stdio.h>

void add(int upper);

int main(){
  printf("How many integers would you like to add? ");
  int upper;
  scanf("%d", &upper);
  add(upper);
}

void add(int upper){
  int total = 0;
  int number = 0;
  while (number <= upper){
    total += number;
    if (number < upper){
      printf("%d + ", number);
      number++;
    } else {
      printf("%d = %d\n", number, total);
      number++;
      //in the last case, print the = statement
      //if want to do < upper, number needs to start at 1, not 0
    }
  }
}