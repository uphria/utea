#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
  char tempC[50];
  char* filename = "temperatureInC.txt";
  fp = fopen(filename, "r");
  fgets(tempC, 50, fp);

  char *ptr;
  double tempCdouble = strtod(tempC, &ptr);

  double tempF = (double)9/5 * tempCdouble + 32;
  printf("%fC = %fF \n", tempCdouble, tempF);

  fclose(fp);
  return 0;
}