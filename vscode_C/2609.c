#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
  int a, b, gcd;
  scanf("%d %d", &a, &b);

  for (int i = 1; i <= a && i <= b; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      gcd = i;
    }
  } 
printf("%d\n", gcd);
printf("%d", a * b / gcd);

return 0;

}