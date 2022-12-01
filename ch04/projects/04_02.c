#include <stdio.h>

int main(void)
{
  int num, ones, tens, hundreds;

  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  ones = num % 10;
  tens = (num / 10) % 10;
  hundreds = num / 100;

  printf("The reversal is %d%d%d", ones, tens, hundreds);

  return 0;
}
