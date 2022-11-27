#include <stdio.h>

int main(void)
{
  int gsi, gi, pc, in, cd;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gsi, &gi, &pc, &in, &cd);

  printf("\nGSI prefix: %d", gsi);
  printf("\nGroup identifier: %d", gi);
  printf("\nPublisher code: %d", pc);
  printf("\nItem number: %d", in);
  printf("\nCheck digit: %d", cd);

  return 0;
}
