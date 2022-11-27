#include <stdio.h>

int main(void)
{
  int num, d, m, y;
  float price;
  printf("Enter item number: ");
  scanf("%d", &num);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);

  printf("\nItem\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d", num, price, m, d, y);

  return 0;
}
