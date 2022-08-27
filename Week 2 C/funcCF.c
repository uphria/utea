#include <stdio.h>

#define C_TO_F 9.0/5.0
#define ZERO 32.0

double convertCtoF(double tempC);
double getTemp();

double convertCtoF(double tempC){
  return C_TO_F * tempC + ZERO;
}

double getTemp(){
  double tempC;
  printf("Enter the temperature in C: ");
  scanf("%lf", &tempC);
  return tempC;
}

int main(){
  double tCelsius = getTemp();
  double tFarhenheit = convertCtoF(tCelsius);
  printf("%.2lf C = %.2lf F\n", tCelsius, tFarhenheit);
  return 0;
}
