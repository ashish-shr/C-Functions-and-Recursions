// C Program to Find Sum of n Natural Numbers using Recursion
// limit: 8 -> Sum 8 natural numbers: 36
#include <stdio.h>
int sumNatural(int);

int main()
{
  int limit;
  printf("Limit: ");
  scanf("%d", &limit);
  printf("Sum of %d natural numbers: %d", limit, sumNatural(limit));
  return 0;
}

int sumNatural(int num)
{
  if (num == 0)
  {
    return 0;
  }
  else if (num == 1)
  {
    return 1;
  }
  else
  {
    return num + sumNatural(num - 1);
  }
}