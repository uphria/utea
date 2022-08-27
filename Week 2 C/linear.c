#include <stdio.h>
#include <stdlib.h>

float solveEquation(float a, float b, float c);

int main(void){
  float a;
  float b;
  float c;

  printf("This calculator solves an equation of the form ax+b=c. \n");
  printf("Enter the value of parameter a: ");
  scanf("%f", &a);
  printf("Enter the value of parameter b: ");
  scanf("%f", &b);
  printf("Enter the value of parameter c: ");
  scanf("%f", &c);
  //alt:
  //printf("Enter the value of parameters a b c ");
  //scanf("%f %f %f", &a, &b, &c);
  printf("The solution for %.2fx + %.2f = %.2f is x = %.2f\n", a, b, c, solveEquation(a, b, c));
}

float solveEquation(float a, float b, float c){
  if (a != 0){
    return (c-b)/a;
  } else {
    printf("The values of your parameters are invalid.\n");
    exit(0);
    //if invalid, exit program using exit()
  }
}