#include <stdio.h>

int main(void)
{
  int amount;

  printf("Enter a whole US Dollar amount: $");
  scanf("%d", &amount);

  int num20 = amount / 20;
  int num10 = (amount - num20*20) / 10;
  int num5 = (amount - num20*20 - num10*10) / 5;
  int num1 = (amount - num20*20 - num10*10 - num5*5);

  printf("$20 Bills: %d\n",num20);
  printf("$10 Bills: %d\n",num10);
  printf("$ 5 Bills: %d\n",num5);
  printf("$ 1 Bills: %d\n",num1);
}
