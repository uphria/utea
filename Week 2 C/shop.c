#include <stdio.h>

void cost_calc();

int main(void){
  cost_calc();
  return 0;
}

void cost_calc(){
  char location;
  float price;
  int age;
  char member;
  float tax = 13;
  float discount = 0;

  printf("Are you shopping from Ontario: (Y or N) ");
  scanf("%c", &location);

  if (location == 'n' || location == 'N'){
    printf("Enter the tax in your location as a percentage: ");
    scanf("%f", &tax);
  }
  printf("Enter the price of the item: ");
  scanf("%f", &price);
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Are you a member of this store: (Y or N) ");
  scanf(" %c", &member);

  if ((member == 'Y' || member == 'y') && (age < 18 || age >= 65))
    discount = 15.0;

  float salePrice = price - discount/100*price;
  float cost = salePrice + tax/100*salePrice;

  printf("The total cost with tax for your order is $%.2f.\n", cost);
}
