#include <stdio.h>

int main() {
  FILE *fp;
  char filename[200];
  char text[200];

  printf("Enter the file name: ");
  scanf("%s", filename);
  printf("Enter a single word: ");
  scanf("%s", text);

  fp = fopen(filename, "w");
  fprintf(fp, "%s", text);

  printf("The word %s, \n has been successfully saved in the file %s!\n", text, filename);
  fclose(fp);
  return 0;
}