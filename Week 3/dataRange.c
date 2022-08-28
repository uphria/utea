#include <stdio.h>

char fileName[100];
double dataPoint, points, low, high;
double total, avg;
void selectData(char filename[], int low, int high);
void getUserInput();
int rangeIsValid();
void display();

int main(){
  getUserInput();
  if (rangeIsValid() == 1){
    selectData(fileName, low, high);
  } else {
    printf("Invalid range boundaries!\n");
  }
}

void selectData(char filename[], int low, int high){
  total = 0;
  points = 0;
  avg = 0;
  FILE *data = fopen(filename, "r");
  if (data != NULL){
    while (fscanf(data, "%lf", &dataPoint) != -1){
      if (low <= dataPoint && dataPoint <= high){
        printf("Data point %.2lf added\n", dataPoint);
        total += dataPoint;
        points++;
      }
    }
    avg = (points != 0)?total/points:0;
    display();
    fclose(data);
  } else {
    printf("Cannot open file %s.\n", filename);
  }
}

void getUserInput(){
  printf("Enter file name: ");
  scanf(" %s", fileName);
  printf("Enter low boundary: ");
  scanf(" %lf", &low);
  printf("Enter high boundary: ");
  scanf(" %lf", &high);
}

int rangeIsValid(){
  return (low <= high)? 1:0;
}

void display(){
  if (points == 0){
    printf("There are no points in this data range (%.1lf,%.1lf).\n", low, high);
  } else {
    printf("the data in the range (%.1lf,%.1lf) have an average %.1lf\n", low, high, avg);
  }
}