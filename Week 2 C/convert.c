#include <stdio.h>

float convert_temp(float temp, char unit);
char other_unit(char old_unit);

int main(void){
  float temp;
  char unit;

  printf("Enter the temperature unit. \'C\' for celsius or \'F\' for fahrenheit ");
  scanf("%c", &unit);
  printf("Enter the temperature: ");
  scanf("%f", &temp);

  float newTemp = convert_temp(temp, unit);
  char newUnit = other_unit(unit);
  printf("%.2f %c = %.2f %c \n", temp, unit, newTemp, newUnit);
  return 0;
}

float convert_temp(float temp, char unit){
  if (unit == 'C')
    return 9.0/5*temp + 32;
  else
    return 5.0/9*(temp-32);
}

char other_unit(char old_unit){
  if (old_unit == 'C')
    return 'F';
  else
    return 'C';
}