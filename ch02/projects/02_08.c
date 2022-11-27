#include <stdio.h>

int main(void)
{
  float bal, int_yr, pay_mo;

  printf("Enter amount of loan: $");
  scanf("%f",&bal);
  printf("Enter interest rate: ");
  scanf("%f",&int_yr);
  printf("Enter monthly payment: $");
  scanf("%f",&pay_mo);

  bal = (bal - pay_mo) + (bal * int_yr / 100.0f / 12.0f);
  printf("\nBalance remaining after first payment: $%.2f",bal);
  bal = (bal - pay_mo) + (bal * int_yr / 100.0f / 12.0f);
  printf("\nBalance remaining after second payment: $%.2f",bal);
  bal = (bal - pay_mo) + (bal * int_yr / 100.0f / 12.0f);
  printf("\nBalance remaining after third payment: $%.2f",bal);

  return 0;
}
