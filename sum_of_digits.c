// C Program to Find Sum of Digits of a Number using Recursion
// number: 143 -> Sum of digits: 8
#include <stdio.h>
int digitsSum(int);

int main()
{
  int num, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  sum = digitsSum(num);
  printf("Sum of digits: %d", sum);
  return 0;
}

int digitsSum(int num)
{
  if (num == 0)
  {
    return 0;
  }
  else
  {
    return (num % 10 + digitsSum(num / 10));
  }
}