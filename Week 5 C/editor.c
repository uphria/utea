#include <stdio.h>

int replace(char text[], char oldChar, char newChar);
int accept();
void getCharacters(char chars[]);
void printSubstring(char chars[], int location);

int main(){
  char sentence[] = "The question how knowledge should be defined is perhaps the most important and difficult of the three with which we shall deal.";
  char chars[2];
  //this one holds oldchar and newchar
  printf("%s\n", sentence);
  getCharacters(chars);
  int occurrences = replace(sentence, chars[0], chars[1]);
  printf("%s\n", sentence);
  printf("\nThere were %d change(s)\n", occurrences);
}

int replace(char text[], char oldChar, char newChar){
  int counter = 0;
  for (int index = 0; text[index] != '\0'; index++){
    //if character found, print printSubstring
    //ask user if change is accepted
    //increase counter and apply change if accepted
    //then go to next character
    //end at null
    if (text[index] == oldChar){
      printSubstring(text, index);
      if (accept()){
        text[index] = newChar;
        counter++;
      }
    }
  }
  return counter;
}

int accept(){
  printf("\nAccept the change(y/n)? ");
  char choice;
  scanf(" %c", &choice);
  return (choice == 'y'? 1 : 0);
}

void getCharacters(char chars[]){
  printf("\nEnter the character to be replaced and the character that will replace it: ");
  scanf(" %c %c", &chars[0], &chars[1]);
}

void printSubstring(char chars[], int location){
  for (int index = 0; index <= location; index++){
    if (index < location) printf("%c", chars[index]);
    else printf("(%c)\n", chars[index]);
  }
}
//before getting to the char to be replaced, print the text as normal
//if the next char is the same as the one to replace, put in brackets and ask in accept() if it should be placed or not