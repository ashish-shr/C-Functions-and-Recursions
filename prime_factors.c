// C program to find prime factors of a number using Recursion
// number: 21 -> Prime factors: 3 7
#include <stdio.h>
void primeFactors(int, int);

int main()
{
  int num;
  printf("Number: ");
  scanf("%d", &num);
  printf("Prime Factors:\n");
  primeFactors(num, 2);
  return 0;
}

void primeFactors(int num, int factor)
{
  if (num == 1)
  {
    return;
  }
  if (num % factor == 0)
  {
    printf("%d ", factor);
    primeFactors(num / factor, factor);
  }
  else
  {
    primeFactors(num, ++factor);
  }
}