#include <stdio.h>
char getColour(float lambda);

int main(){
  printf("Lambda (nm): ");
  float lambda;
  scanf("%f", &lambda);
  char symbol = getColour(lambda);
  printf("The colour for lambda = %.1f nm is \'%c\'\n", lambda, symbol);
}

char getColour (float lambda){
  if (lambda >= 750){
    return 'u';
  } else if (lambda >= 620){
    return 'R';
  } else if (lambda >= 590){
    return 'O';
  } else if (lambda >= 570){
    return 'Y';
  } else if (lambda >= 495){
    return 'G';
  } else if (lambda >= 450){
    return 'B';
  } else if (lambda >= 380){
    return 'V';
  } else {
    return 'u';
  }
}