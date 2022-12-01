#include <stdio.h>

int main(void)
{
  int ones, tens, huns;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &huns, &tens, &ones);
  printf("The reversal is: %d%d%d", ones, tens, huns);

  return 0;
}
