// C Program to Find Product of Two Numbers using Recursion
// first number: 3|second number: 7 -> Product: 21
// first number: 1|second number: 4 -> Product: 4
#include <stdio.h>
int product(int, int);

int main()
{
  int firstNum, secondNum;
  printf("First Number: ");
  scanf("%d", &firstNum);
  printf("Second Number: ");
  scanf("%d", &secondNum);
  printf("Product: %d", product(firstNum, secondNum));
  return 0;
}

int product(int firstNum, int secondNum)
{
  if (firstNum < secondNum)
  {
    return product(secondNum, firstNum);
  }
  else if (secondNum != 0)
  {
    return (firstNum + product(firstNum, secondNum - 1));
  }
  else
  {
    return 0;
  }
}