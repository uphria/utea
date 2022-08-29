#include <stdio.h>
#define DIM 3

int is_identity(double matrix[DIM][DIM], int dim);
void print(double data[][DIM], int rows);

int main(){
  double matrix_one [][DIM] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  int items = sizeof matrix_one / sizeof matrix_one[0];
  printf("\nmatrix: \n");
  print(matrix_one, items);
  printf("\nis %s identity matrix\n\n\n", (is_identity(matrix_one, items))?"":"not");

  double matrix_two[][DIM] = {{1, 0, 1}, {0, 1, 1}, {0, 0, 1}};
  items = sizeof matrix_two / sizeof matrix_two[0];
  printf("\nmatrix: \n");
  print(matrix_two, items);
  printf("\nis %s identity matrix\n\n\n", (is_identity(matrix_two, items))?"":"not");
}

void print(double data[][DIM], int rows){
  printf("\n");
  for (int row = 0; row < rows; row++){
    int dims = sizeof data[row]/sizeof data[row][10];
    for (int col = 0; col < dims; col++){
      printf("%.1lf ", data[row][col]);
    }
    printf("\n");
  }
  printf("\n");
}

int is_identity(double points[][DIM], int rows){
  int zero = 1;
  int one = 1;
  for (int row = 0; row < rows && zero && one; row++){
    int dims = sizeof points[row]/sizeof points[row][0];
    for (int col = 0; col < dims && zero && one; col++){
      if (col == row && points[row][col] != 1) one = 0;
      if (col != row && points[row][col] != 0) zero = 0;
    }
  }
  return zero && one;
}