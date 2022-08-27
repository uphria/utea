#include <stdio.h>
#include <string.h>

int main(void){
  char name[100];
  char lName[100];
  char domain[100];
  char email[100];

  printf("Enter your first name: \n");
  scanf("%s", name);
  printf("Enter your last name: \n");
  scanf("%s", lName);
  printf("Enter the domain name? \n");
  scanf("%s", domain);

  strcpy(email, lName);
  strcat(email, ".");
  strcat(email, name);
  strcat(email, "@");
  strcat(email, domain);

  printf("Hello %s, \nYour new email address is:\t%s \n", name, email);

  return 0;
}