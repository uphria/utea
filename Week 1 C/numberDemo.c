#include <stdio.h>
#include <math.h>

int main(){
  int num;
  num = 42;
  int num1 = num;
  
  printf("The first integer: %d \n", num1);

  num1 = num1 + 10;
  printf("Increased by 10: %d \n", num1);

  num1 = 2*num1;
  printf("Then doubled: %d \n", num1);

  num1++;
  printf("Increased by 1: %d \n", num1);

  printf("The remainder of %d and %d is %d \n", num1, num, num1%num);

  float num2 = 20.7; float num3 = 3;
  printf("The two float numbers are: %f %f \n", num2, num3);
  printf("Their sum is: %f \n", num2 + num3);
  printf("Their quotient is %f \n", num2/num3);

  double pi = 3.14159;
  double radius = 5;

  double area = pow(radius, 2.0);
  printf("The area of the circle is %lf cm^2! \n", area);

  return 0;
}