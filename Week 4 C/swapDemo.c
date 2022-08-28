#include <stdio.h>

void swap(int data[], int length);
void print(int data[], int length);

int main(){
  int elements[] = {1, 2, 3, 4};
  int len = sizeof elements/ sizeof elements[0];
  //total amount of memory used divided by memory used by one element
  print(elements,len);
  swap(elements,len);
  print(elements,len);
}

void swap(int data[], int length){
  if (length >= 2){
    int temp = data[0];
    data[0] = data[length-1];
    //if put length instead of length - 1, out of bounds situation, returns garbage value
    data[length-1] = temp;
    //first element in last element place
    //last element in first element place
  }
}

void print(int data[], int length){
  int index = 0;
  while (index < length){
    printf("%d\t", data[index++]);
    //if not increment index, infinite loop uh oh
  }
  printf("\n");
}