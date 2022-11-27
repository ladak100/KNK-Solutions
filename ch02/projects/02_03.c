#include <stdio.h>

int main (void)
{
  float r = 0.0;
  float pi = 3.1416;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &r);

  printf("Volume (using 4/3): %.2f\n", 4/3 * pi * (r * r * r));
  printf("Volume: %.2f", 4.0f/3.0f * pi * (r * r * r));

  return 0;
}
