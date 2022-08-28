#include <stdio.h>

//extract positive or negative values and store in the corresponding destination array
int extract(double destination[], double data[], int len, char choice);

//counts the number of + or - items
int countData(double data[], int len, char choice);

//prints array
void print(double data[], int len);

int main(){
  double rawData[] = {1, -2, 3, 4, -0.5, 32, 2.3, -6};
  int len = sizeof(rawData)/sizeof(rawData[0]);
  int countNeg = countData(rawData, len, '-');
  int countPos = len - countNeg;

  double negatives [countNeg];
  double positives [countPos];
   extract(negatives, rawData, len, '-');
  extract(positives, rawData, len, '+');

  printf("%s\n", "All data:");
  print(rawData, len);
  printf("%s\n", "Negative data:");
  print(negatives, countNeg);
  printf("%s\n", "Positive data:");
  print(positives, countPos);
}

void print(double data[], int len){
  int index = 0;
  while (index < len){
    printf("%.2lf\t", data[index++]);
  }
  printf("\n");
}

int countData(double data[], int len, char choice){
  int counter = 0;
  if (choice == '-'){
    int index = 0;
    while (index < len){
      if (data[index++] < 0){
        counter++;
      }
    }
  } else {
    int index = 0;
    while (index < len){
      if (data[index++] >= 0){
      counter++;
      }
    }
  }
  return counter;
}

int extract(double destination[], double data[], int len, char choice){
  int counter = 0;
  if (choice == '-'){
    int index = 0;
    while (data[index] < len){
      if (data[index] < 0){
        destination[counter++] = data[index++];
      } else {
        index++;
      }
    }
  } else {
    int index = 0;
    while (index < len){
      if (data[index] >= 0){
      destination[counter++] = data[index++];
      } else {
        index++;
      }
    }
  }
  return counter;
}