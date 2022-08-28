#include <stdio.h>

void switchLight(char colour);
void interact();

int main(){
  interact();
}

void interact(){
  char symbol;
  do{
    printf("Enter a colour choice (q to quit)\n");
    printf("(B or b, G or g, Y or y, R or r) ");
    scanf(" %c", &symbol);
    switchLight(symbol);
  } while (!(symbol == 'q' || symbol == 'Q'));
}

void switchLight (char colour){
  switch(colour){
    case 'B': case 'b':
      printf("%c --> Green\n", colour);
    break;
    case 'G': case 'g':
      printf("%c --> Yellow\n", colour);
    break;
    case 'Y': case 'y':
      printf("%c --> Red\n", colour);
    break;
    case 'R': case 'r':
      printf("%c --> Blue\n", colour);
    break;
    case 'Q': case 'q':
      printf("%c --> Goodbye!\n", colour);
      break;
    default:
      printf("%c --> Invalid Colour!\n", colour);
  }
}

//switch: an alternative to if else, if the evaluated subject of the if else is always the same. instead if colour == 'B' etc, switch(colour) and evalue cases of 'B' etc