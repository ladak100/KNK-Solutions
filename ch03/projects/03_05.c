#include <stdio.h>

int main(void)
{
  int a1,a2,a3,a4,
      b1,b2,b3,b4,
      c1,c2,c3,c4,
      d1,d2,d3,d4;
  int sum_a,sum_b,sum_c,sum_d,sum_1,sum_2,sum_3,sum_4,sum_diag1,sum_diag2;

  printf("Enter the numbers from 1 to 16 in any order:\n");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
        &a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4,&c1,&c2,&c3,&c4,&d1,&d2,&d3,&d4);

  printf("\n%3d%3d%3d%3d",a1,a2,a3,a4);
  printf("\n%3d%3d%3d%3d",b1,b2,b3,b4);
  printf("\n%3d%3d%3d%3d",c1,c2,c3,c4);
  printf("\n%3d%3d%3d%3d",d1,d2,d3,d4);

  /*row sums*/
  sum_a = a1+a2+a3+a4;
  sum_b = b1+b2+b3+b4;
  sum_c = c1+c2+c3+c4;
  sum_d = d1+d2+d3+d4;

  /*col sums*/
  sum_1 = a1+b1+c1+d1;
  sum_2 = a2+b2+c2+d2;
  sum_3 = a3+b3+c3+d3;
  sum_4 = a4+b4+c4+d4;

  /*diag sums*/
  sum_diag1 = a1+b2+c3+d4;
  sum_diag2 = a4+b3+c2+d1;

  printf("\nRow sums: %d %d %d %d",sum_a,sum_b,sum_c,sum_d);
  printf("\nCol sums: %d %d %d %d",sum_1,sum_2,sum_3,sum_4);
  printf("\nDiag sums: %d %d",sum_diag1,sum_diag2);

  return 0;
}
