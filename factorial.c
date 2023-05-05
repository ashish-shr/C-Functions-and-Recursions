// C Program to Find the Factorial of a Number using Recursion
// number: 3 -> factorial: 6
#include <stdio.h>
int factorial(int);

int main()
{
  int num;
  printf("Number: ");
  scanf("%d", &num);
  printf("Factorial: %d", factorial(num));
  return 0;
}

int factorial(int num)
{
  if (num == 0 || num == 1)
  {
    return 1;
  }
  else
  {
    return num * factorial(num - 1);
  }
}