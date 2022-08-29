#include <stdio.h>
#define DIM 2

int search(double points[][DIM], int rows);
void print(double data[][DIM], int rows);

int main(){
  double points[][DIM] = {{1, -3}, {-2, 3}, {1, 4}, {0, 10}, {1, 5}};
  int items = sizeof points / sizeof points[0];
  int positives = search(points, items);
  printf("\nThere are %d positive points in the set \n", positives);
  print(points, items);
}

void print(double data[][DIM], int rows){
  printf("\n");
  for (int row = 0; row < rows; row++){
    int dims = sizeof data[row]/sizeof data[row][0];
    printf("(");
    for (int col = 0; col < dims; col++){
      printf("%.2lf ", data[row][col]);
    }
    printf(")\t");
  }
  printf("\n");
}

int search(double points[][DIM], int rows){
  int positive = 1;
  int counter = 0;
  for (int row = 0; row < rows; row++){
    int dims = sizeof points[row]/sizeof points[row][0];
    for(int col = 0; col < dims && positive; col++){
      if (points[row][col] < 0) positive = 0;
    }
    if (positive) counter++;
    positive = 1;
  }
  return counter;
}
//if negative, don't increment counter
//if positive, increment counter