#include <stdio.h>

float calculate_interest(float rate, float principle);

int main(void){
  float rate;
  float principle;
  printf("Enter the interest rate as a percentage: ");
  scanf("%f", &rate);
  printf("Enter the principle amount of your loan: ");
  scanf("%f", &principle);

  printf("Your simple interest amount is %.2f \n", calculate_interest(rate,principle));
  return 0;
}

float calculate_interest(float rate, float principle){
  return principle * rate /100;
}