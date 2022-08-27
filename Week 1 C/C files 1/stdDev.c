#include <stdio.h>
#include <math.h>

int main(void){
  float first;
  float second;
  float third;
  float avg;
  float stDev;

  printf("Enter first measurement: \n");
  scanf("%f", &first);
  printf("Enter second measurement: \n");
  scanf("%f", &second);
  printf("Enter third measurement: \n");
  scanf("%f", &third);

  avg = (first+second+third)/3;
  stDev = sqrt((pow(first-avg, 2) + pow(second-avg, 2) + pow(third-avg, 2))/3
  );

  printf("The standard deviation for the measurements\
    (%.2f, %.2f, %.2f) is %.2f. \n", 
    first, second, third, stDev);
  return 0;
}

//use gcc stdDev.c -lm to compile
//will result in error message for some reason
//compiling with make also results in error
//after gcc compile, put in ./a.out for it to work