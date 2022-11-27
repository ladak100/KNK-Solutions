#include <stdio.h>

int main(void)
{
  int d, m, y;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);
  printf("%.4d%.2d%.2d", y, m, d);

  return 0;
}
