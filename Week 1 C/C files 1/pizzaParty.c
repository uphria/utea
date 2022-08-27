#include <stdio.h>

int main() {
  int slices;
  int guests;
  int n;
  int remain;

  printf("Enter the numebr of slices \n");
  scanf("%d", &slices);

  printf("Enter the number of guests: \n");
  scanf("%d", &guests);

  n = slices/guests;
  remain = slices%guests;

  printf("There are %d slices per person and %d slices left.\n", n, remain);
  return 0;
}