#include <stdio.h>

int main(){
 FILE *fp;
  char filename[250];
  char text[250];
  
  printf("Enter the file name: ");
  scanf("%s", filename); 

  fp = fopen(filename, "r");
  fgets(text, 100, fp);

  printf("The text %s, \nhas been successfully retrieved from the file %s!\n", text, filename);
  fclose(fp);
  return 0;
}