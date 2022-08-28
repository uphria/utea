#include <stdio.h>
char get_level(int mark);

int main(){
  double mark;
  printf("Enter mark: ");
  scanf("%lf", &mark);
  printf("A mark of %.1lf %c corresponds to level %c\n", mark, '%', get_level(mark));
}

char get_level(int mark){
  if (0 > mark || mark > 100){
    return 'W';
  }
  char level;
  if (mark >= 80){
    level = '4';
  } else if (mark >= 70){
    level = '3';
  } else if (mark >= 60){
    level = '2';
  } else if (mark >= 50){
    level = '1';
  } else {
    level = 'R';
  }
  return level;
}