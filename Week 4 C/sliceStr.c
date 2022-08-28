#include <stdio.h>
#include <ctype.h>
#include <string.h>

void getFirstName(char firstName[], char fullName[], int locBlank);
int getIndex(char text[], char letter, int len);

int main(){
  char fullName[] = "arIRTIZaan BerKonal";
  int len = strlen(fullName);
  int lenName = getIndex(fullName, ' ', len);
  char firstName[lenName];
  getFirstName(firstName, fullName, lenName);
  printf("Full name: %s\nFirst name: %s\n", fullName, firstName);
}

int getIndex(char text[], char letter, int len){
  int index = 0;
  while (index < len){
    if (text[index] == letter){
      return index;
    }
    index ++;
  }
  return -1;
}

void getFirstName(char firstName[], char fullName[], int locBlank){
  int index = 0;
  while (index < locBlank){
    if (index == 0){
      firstName[index] = toupper(fullName[index]);
    } else{
      firstName[index] = tolower(fullName[index]);
    }
    index++;
  }
  firstName[index] = '\0';
}