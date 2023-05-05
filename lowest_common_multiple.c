// C Program to Find LCM of Two Numbers using Recursion
// 1st number: 72 | 2nd number: 120 -> LCM: 360
#include <stdio.h>
int lcm(int, int, int);

int main()
{
  int firstNum, secondNum, result;
  printf("Enter first number: ");
  scanf("%d", &firstNum);
  printf("Enter second number: ");
  scanf("%d", &secondNum);
  result = lcm(firstNum, secondNum, 1);
  printf("LCM of %d and %d is %d\n", firstNum, secondNum, result);
  return 0;
}

int lcm(int firstNum, int secondNum, int common)
{
  if (common % firstNum == 0 && common % secondNum == 0)
  {
    return common;
  }
  return lcm(firstNum, secondNum, ++common);
}
