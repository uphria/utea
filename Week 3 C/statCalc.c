#include <stdio.h>

double min(double first, double second);
double max(double first, double second);
double average(double total, int items);
double getNumber();
void display();
int next();
void interact();

int items = 0;
double total = 0;
double maxVal = 0;
double minVal = 0;
double number = 0;
double avg = 0;

int main(){
  interact();
  avg = average(total, items);
  display();
}

double min(double first, double second){
  return (first <= second)?first:second;
}

double max(double first, double second){
  return (first >= second)?first:second;
}

double average(double total, int items){
  if (items > 0){
    return total/items;
  } else {
    return total;
  }
}

void interact(){
  if (next()){
    number = getNumber();
    minVal = number;
    maxVal = number;
    total += number;
    items++;
    while(next()){
      number = getNumber();
      minVal = min(number, minVal);
      maxVal = max(number, maxVal);
      total += number;
      items++;
    }
  }
}

double getNumber(){
  double number;
  printf("Enter a number: ");
  scanf(" %lf", &number);
  return number;
}

int next(){
  char answer;
  printf("Do you want to enter a number (y/n)? ");
  scanf(" %c", &answer);
  return (answer == 'y' || answer == 'Y')? 1:0;
}

void display(){
  printf("You entered %d numbers.\n", items);
  printf("The lowest number was %.1lf.\n", minVal);
  printf("The highest number was %.1lf.\n", maxVal);
  printf("The average was %.1lf.\n", avg);
}

//the ternary operator:
//testCondition ? expression1 : expression2;
//testCondition is a boolean that results in True or False
//if True, expression1 is executed
//if False, expression2 is executed