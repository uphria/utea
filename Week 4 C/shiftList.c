#include <stdio.h>

void shift(int shifted[], int data[], int len, int key);
void print(int data[], int len);

int main(){
  int key;
  printf("Enter a key:\n");
  scanf("%d", &key);
  int data[] = {1, 2, 3, 4, 5, 6, 7};
  int len = sizeof data / sizeof data[0];
  print(data, len);
  int shiftedData[len];
  shift(shiftedData, data, len, key);
  print(shiftedData, len);
}

void print(int data[], int len){
  int index = 0;
  while (index < len){
    printf("%d\t", data[index++]);
  }
  printf("\n");
}

void shift(int shifted[], int data[], int len, int key){
  //get key value for keys greater then length
  //use remainder since a multiple of length
  //bring array in the same original state
  int simpleKey = key % len;
  //neg key is same as positive complement
  //for 7 elements, -3 is the same as +4
  //change all neg keys to positive ones
  if (simpleKey < 0){
    simpleKey = len + simpleKey;
  }
  int index = 0;
  int wrapIndex = 0;
  while (index < len){
    if (index + simpleKey < len){
      shifted[index + simpleKey] = data[index];
      index++;
      wrapIndex = index;
      //if not reached the last index yet do if
      //wrapIndex keeps track of where to stop and go to the beginning
    } else {
      shifted[index - wrapIndex] = data[index];
      index++;
      //else when the beginning has been reached again
    }
  }
}