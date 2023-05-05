//  C Program to Calculate the Power using Recursion
// number: 2|power: 3 -> 2 with power 3: 8
#include <stdio.h>
int power(int, int);

int main()
{
  int num, pow;
  printf("Number: ");
  scanf("%d", &num);
  printf("Power: ");
  scanf("%d", &pow);
  printf("%d with power %d: %d", num, pow, power(num, pow));
  return 0;
}

int power(int num, int pow)
{
  if (pow == 0)
  {
    return 1;
  }
  else
  {
    return (num * power(num, pow - 1));
  }
}