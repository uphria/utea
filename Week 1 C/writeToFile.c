#include <stdio.h>

int main()
{
  FILE *fp;
  fp = fopen("1.txt", "w");

  fprintf(fp, "This is line 1\n");
  fprintf(fp, "This is line 2\n");

  fclose(fp);
  
  return 0;
}

//make writeToFile, ./writeToFile
//then do ./a.out
//check 1.txt to find the 2 lines of text This is line 1, This is line 2