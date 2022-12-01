#include <stdio.h>

int main(void)
{
  int num, ones, tens;

  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  ones = num % 10;
  tens = num / 10;

  printf("The reversal is %d%d", ones, tens);

  return 0;
}
