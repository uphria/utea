#include <stdio.h>

int main(void)
{
  FILE *fp;
  char firstLine[100];
  char secondLine[100];
  char filename[] = "2.txt";

  fp = fopen(filename, "r");
  fgets(firstLine, 100, fp);
  fgets(secondLine, 100, fp);

  printf("%s", firstLine);
  printf("%s \n", secondLine);

  fclose(fp);
  return 0;
}

//somehow doing gcc -o rFile readFromFile.c 
//and then doing ./rFile
//should write 2.txt into rFile