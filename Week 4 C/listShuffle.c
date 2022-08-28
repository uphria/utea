#include <stdio.h>

void shuffle(int mixed[], int first[], int second[], int len);
void print(int data[], int len);

int main(){
  int first[] = {1, 3, 5, 7};
  int second[] = {2, 4, 6, 8};
  int len = sizeof(first)/sizeof(first[0]);
  int mixed[2*len];

  shuffle(mixed, first, second, len);

  printf("First array\n");
  print(first,len);
  printf("Second array\n");
  print(second, len);
  printf("Mixed array\n");
  print(mixed, 2*len);
}

void shuffle(int mixed[], int first[], int second[], int len){
  int index = 0;
  int indexMixed = 0;
  while (index < len){
    mixed[indexMixed++] = first[index];
    mixed[indexMixed++] = second[index++];
  }
}

void print(int data[], int len){
  int index = 0;
  while (index < len){
    printf("%d\t", data[index++]);
    //prints data[index], then does index++
  }
  printf("\n");
}