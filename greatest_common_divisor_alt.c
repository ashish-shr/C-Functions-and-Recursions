// C Program to Find GCD of Two Numbers using Recursion [1]
#include <stdio.h>
int greatestCommonDivisor(int, int);

int main()
{
  int firstNum, secondNum, gcd = 0;
  printf("Enter first number and second number:\n");
  scanf("%d %d", &firstNum, &secondNum);
  gcd = greatestCommonDivisor(firstNum, secondNum);
  printf("Greatest Common Divisor: %d", gcd);
  return 0;
}

int greatestCommonDivisor(int firstNum, int secondNum)
{
  if (secondNum != 0)
  {
    return greatestCommonDivisor(secondNum, firstNum % secondNum);
  }
  else
  {
    return firstNum;
  }
}