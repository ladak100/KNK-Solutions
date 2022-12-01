#include <stdio.h>

int main(void)
{
  int num, oct_0, oct_1, oct_2, oct_3, oct_4;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &num);

  oct_4 = num / (8*8*8*8);
  num %= (8*8*8*8);
  oct_3 = num / (8*8*8);
  num %= (8*8*8);
  oct_2 = num / (8*8);
  num %= (8*8);
  oct_1 = num / (8);
  num %= (8);
  oct_0 = num;

  printf("In octal, your number is: ");
  printf("%d%d%d%d%d", oct_4, oct_3, oct_2, oct_1, oct_0);

  return 0;
}
