#include <stdio.h>
#include <string.h>

void maskEmail(char maskedEmail[], char email[], int len);
int isValid(char email[], int len);
int getIndex(char text[], char letter, int len);
int getLastIndex(char text[], char letter, int len);
int isVowel(char letter);

int main(){
  char email[100];
  char maskedEmail[100];
  printf("Enter your email address: \n");
  scanf("%s", email);
  int len = strlen(email);
  if (isValid(email, len)){
    maskEmail(maskedEmail, email, len);
    printf("Masked email: %s\n", maskedEmail);
  } else {
    printf("Wrong email format\n");
  }
}

int isValid(char email[], int len){
  int indexAt = getIndex(email, '@', len);
  int indexDot = getLastIndex(email, '.', len);
  if (indexAt != -1 && indexDot != -1 && indexAt < indexDot && indexDot < len - 1){
    return 1;
  } else {
    return 0;
  }
}

void maskEmail(char maskedEmail[], char email[], int len){
  int index = 0;
  int atIndex = getIndex(email, '@', len);
  while (index < len){
    if (index < atIndex){
      maskedEmail[index] = (isVowel(email[index]) == 1)? '*': email[index];
      index++;
    } else {
      maskedEmail[index] = (isVowel(email[index]) == 1)? '#': email[index];
      index++;
    }
  }
  maskedEmail[index] = '\0';
}

int getIndex(char text[], char letter, int len){
  int index = 0;
  while (index < len){
    if (text[index] == letter){
      return index;
    }
    index++;
  }
  return -1;
}

int isVowel(char letter){
  if (letter == 'a' || letter == 'A' ||
    letter == 'e' || letter == 'E' ||
    letter == 'i' || letter == 'I' ||
    letter == 'o' || letter == 'O' ||
    letter == 'u' || letter == 'U'){
    return 1;
  } else {
    return 0;
  }
}

int getLastIndex(char text[], char letter, int len){
  int index = len - 1;
  while (index >= 0){
    if (text[index] == letter){
      return index;
    }
    index--;
  }
  return -1;
}