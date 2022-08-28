#include <stdio.h>

int start_time(char day);

int main(){
  char day;
  printf("Enter symbol for week day (M, T, W, R, F, S, U): ");
  scanf("%c", &day);
  printf("The start time for \'%c\' is %d.\n", day, start_time(day));
}

int start_time(char day){
  int time;
  switch(day){
    case 'M': case 'm':
      return 10;
    case 'T': case 't':
      return 16;
    case 'W': case 'w':
      return 0; //dday off
    case 'R': case'r':
      return 13;
    case 'F': case 'f':
      return 9;
    case 'S': case 's': case 'U': case 'u':
      return 0;
    default: 
      return -1; //for wrong symbol
  }
}