#include <stdio.h>
#include "totaller.h"

float total = 0.0;
short count = 0;
short tax_percant = 6;


int main()
{
  float val;
  printf("Price of item: ");
  while (scanf("%f", &val) == 1) {
    printf("Total is at the moment: %.2f\n", add_with_tax(val));
    printf("Price of item: ");
  }
  printf("\nTotal price: %.2f\n", total);
  printf("Count of items: %hi\n", count);
  return  0;
}


float add_with_tax(float f)
{
  float tax_rate = 1 + tax_percant / 100.0;
  total = total + (f*tax_rate);
  count = count + 1;
  return total;
}
