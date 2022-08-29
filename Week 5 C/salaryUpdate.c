#include <stdio.h>

int update(double salaires[], int lenSal, double adjustments[], int lenAdj);
void print(double data[], int len);

int main(){
  double salaries[] = {50, 80, 90, 50, 75, 20, 99, 88, 33, 60};
  double adjustments[] = {50, 0, 0, 10, 10, 20, 0, 0, 0, 10};
  int lenSal = sizeof salaries / sizeof salaries[0];
  int lenAdj = sizeof adjustments / sizeof adjustments[0];
  print(salaries, lenSal);
  update(salaries, lenSal, adjustments, lenAdj);
  print(salaries, lenSal);
}

void print(double data[], int len){
  for (int index = 0; index < len; index++){
    printf("%.1lf\t", data[index]);
  }
  printf("\n");
}

int update(double salaries[], int lenSal, double adjustments[], int lenAdj){
  if(lenSal == 0 || lenAdj == 0 || lenSal != lenAdj){
    return 0;
  }
  for (int index = 0; index < lenSal; index++){
    double rate = 1 + adjustments[index]/100;
    printf("new salary: %.2lf x %.2lf = $%.2lf\n", salaries[index], rate, salaries[index]*rate);
    salaries[index] = salaries[index]*rate;
  }
  return 1;
}