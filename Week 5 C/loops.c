#include <stdio.h>
#include <string.h>
#define CHARS 20

int search(char data[][CHARS], int rows, char letter);
void print(char data[][CHARS], int rows);

int main(){
  char words[][CHARS] = {"morning", "night", "afternoon"};
  int items = sizeof words / sizeof words[0];
  print(words, items);
  int frequency = search(words, items, 'o');
  printf("The letter \'%c\' is found %d times\n", 'o', frequency);
}

int search(char data[][CHARS], int rows, char letter){
  int counter = 0;
  for (int row = 0; row < rows; row++){
    for (int col = 0; col < strlen(data[row]); col++){
      if (data[row][col] == letter){
        counter++;
      }
    }
  }
  return counter;
}

void print(char data[][CHARS], int rows){
  printf("\n");
  for (int row = 0; row < rows; row++){
    printf("%s\t", data[row]);
  }
  printf("\n");
}