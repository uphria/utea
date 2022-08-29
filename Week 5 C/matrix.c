#include <stdio.h>

#define MAX 20
void transpose(int matrix[][MAX], int transposed[][MAX], int rows, int cols);
void print(int matrix[][MAX], int rows, int cols);

int main(){
  char keepgoing;
  printf("Get some data(y/n)? ");
  scanf("%c", &keepgoing);

  while(keepgoing == 'y'){
    int rowsu;
    int colsu;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rowsu, &colsu);

    //min value for og matrix rows is rowsu
    //so then min value for transposed matrix is colsu
    //columns are at max value that can be used
    int matrix[rowsu][MAX];
    int transposed[colsu][MAX];

    //generate matrix with rows rows and cols columns
    //elements are the sum of the rows and columns
    //populating of the matrix with values so there is no need for user input here
    for (int row = 0; row < rowsu; row++){
      for (int col = 0; col < colsu; col++){
        matrix[row][col] = row+col;
      }
    }
    print(matrix, rowsu, colsu);
    transpose(matrix, transposed, rowsu, colsu);
    print(transposed, colsu, rowsu);
    printf("Get some data(y/n)? ");
    scanf(" %c", &keepgoing);
  }
}

void print(int matrix[][MAX], int rows, int cols){
  for (int row = 0; row < rows; row++){
    for (int col = 0; col < cols; col++){
      printf("%d\t", matrix[row][col]);
    }
    printf("\n");
  }
}

void transpose(int matrix[][MAX], int transposed[][MAX], int rows, int cols){
  for (int row = 0; row < rows; row++){
    for (int col = 0; col < cols; col++){
      transposed[col][row] = matrix[row][col];
    }
  }
}
//simply switching the rows and the columns of the matrix