// C Program to Find GCD of Two Numbers using Recursion [2]
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
  while (firstNum != secondNum)
  {
    if (firstNum > secondNum)
    {
      return (firstNum - secondNum, secondNum);
    }
    else
    {
      return (firstNum, secondNum - firstNum);
    }
  }
  return firstNum;
}