#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int list[], int items, int number);
int generateNumber(int low, int high);
void createUniqueSet(int list[], int items, int low, int high);
void print(int list[], int items);
void resetList(int list[], int items);

int main(){
  srand(time(NULL));
  //done once at beginning of main
  int items, low, high;
  printf("\n Enter number of items to be created, low, boundary, high boundary: ");
  scanf("%d %d %d", &items, &low, &high);
  int list[items];
  resetList(list, items);
  createUniqueSet(list, items, low, high);
  print(list, items);
}

//checks in list if the generated number exists already
//if it does, return 0
//if it doesn't, return 1 and add the number to the list
int add(int list[], int items, int number){
  int index = 0;
  for (; index < items && list[index] != 0; index++){
    if (list[index] == number){
      return 0;
    }
  }
  list[index] = number;
  return 1;
}

//generates random number using srand
int generateNumber(int low, int high){
  return (rand()%(high-low+1))+ low;
}

void createUniqueSet(int list[], int items, int low, int high){
  int number = generateNumber(low, high);
  int counter = 0;
  while (counter < items){
    if (add(list, items, number)){
      counter++;
    }
    number = generateNumber(low, high);
  }
}

void print(int list[], int items){
  printf("\n");
  for (int index = 0; index < items; index++){
    printf("%d ", list[index]);
  }
  printf("\n");
}

//reset list so that all values are initialized to 0, or else you get a bunch of garbage values
//in that case, the for loop would see that the number isn't 0, but the list index isn't the generated number so it doesn't return 0 and the garbage value is successfully added in
void resetList(int list[], int items){
  for (int index = 0; index < items; index++){
    list[index] = 0;
  }
}
