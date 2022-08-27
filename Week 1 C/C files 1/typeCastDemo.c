#include <stdio.h>
#include <stdlib.h>

int main(void){
  char numberStr[] = "42";
  printf("\"%s\" is type string \n", numberStr);

  char *ptr;

  double number = strtod(numberStr, &ptr);
  //take face value of numberStr and put into number as a double
  printf("%lf is type double \n", number);

  int anotherNumber = number;
  printf("%d is type int \n", anotherNumber);
  float floatNumber = anotherNumber;
  printf("%f is type float \n", floatNumber);

  char floatNumberStr[100];
  sprintf(floatNumberStr, "%f", floatNumber);
    //using sprintf to convert number to string
    printf("%s is type string \n", floatNumberStr);

  return 0;
}