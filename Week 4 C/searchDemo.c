#include <stdio.h>

int is_in(int dataSet[], int length, int point);
void print(int dataSet[], int length);

int main(){
  int elements[] = {1, 2, 3, 4};
  int len = sizeof elements / sizeof elements[0];
  
  print(elements,len);
  
  int element = 3;
  int location = is_in(elements, len, element);
  if (location != -1){
    printf("Element %d is in location %d\n", element, location);
  } else {
    printf("Element %d is not found\n", element);
  }
}

int is_in(int dataSet[], int length, int point){
  int index = 0;
  while (index < length){
    if (dataSet[index] == point) return index;
    index++;
  }
  return -1;
}

void print(int data[], int length){
  int index = 0;
  while (index < length){
    printf("%d\t", data[index++]);
  }
  printf("\n");
}