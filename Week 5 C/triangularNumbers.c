#include <stdio.h>

#define MAX 40
void emptyTriangle(char triangle[][MAX], char symbol);
void print(char triangle[][MAX], int number);
void fillTriangle(char[][MAX], int number, char symbol);

int main(){
  char triangle[MAX][MAX];
  for (int number = 1; number < 11; number++){
    emptyTriangle(triangle, ' ');
    fillTriangle(triangle, number, '*');
    print(triangle, number);
  }
  return 0;
}

void print(char triangle[][MAX], int number){
  int rows = number;
  int cols = 2*number-1;
  for (int row = 0; row < rows; row++){
    for (int col = 0; col < cols; col++){
      printf("%c", triangle[row][col]);
    }
    printf("\n");
  }
}

void emptyTriangle(char shape[][MAX], char symbol){
  for (int row = 0; row < MAX; row++){
    for (int col = 0; col < MAX; col++){
      shape[row][col] = symbol;
    }
  }
}

void fillTriangle(char triangle[][MAX], int number, char symbol){
  int rows = number;
  int cols = 2*number - 1;
  int middle = (int)(cols/2);
  int left = middle - 1;
  int right = middle + 1;
  for (int row = 0; row < rows; row++){
    if (row % 2 == 0){
      left = middle;
      right = middle;
    } else {
      left = middle - 1;
      right = middle + 1;
    }
    while (right - middle <= row){
      triangle[row][left] = '*';
      triangle[row][right] = '*';
      right += 2;
      left -= 2;
    }
  }
}
